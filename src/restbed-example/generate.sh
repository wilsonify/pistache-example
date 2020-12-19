
docker run --rm \
-v "${PWD}:/local" \
-u "${UID}:${GID}" \
openapitools/openapi-generator-cli:v4.1.2 generate \
-i /local/openapi/openapi.yaml \
-g cpp-restbed-server \
-o /local