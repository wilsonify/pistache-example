
docker run --rm \
-u $(id -u):$(id -g) \
-v "${PWD}:/local" \
openapitools/openapi-generator-cli:v5.3.0 generate \
-i /local/openapi/openapi.yaml \
-g cpp-pistache-server \
-o /local


