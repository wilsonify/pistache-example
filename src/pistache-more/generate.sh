
docker run --rm \
-v "${PWD}:/local" \
openapitools/openapi-generator-cli:v4.1.2 generate \
-i /local/openapi/openapi.yaml \
-g cpp-pistache-server \
-o /local


sudo chown -R $USER .