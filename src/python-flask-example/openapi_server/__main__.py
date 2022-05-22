#!/usr/bin/env python3

import connexion

from openapi_server import encoder
from json_ref_dict import materialize, RefDict

def main():
    app = connexion.App(__name__, specification_dir='./openapi/')
    app.app.json_encoder = encoder.JSONEncoder
    schema = materialize(RefDict('openapi/openapi.yaml'))
    assert isinstance(schema, dict)
    app.add_api(
        schema,
        arguments={'title': 'Swagger Petstore'},
        pythonic_params=True
    )
    app.run(port=8080)


if __name__ == '__main__':
    main()
