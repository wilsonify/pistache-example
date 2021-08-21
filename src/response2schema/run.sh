docker run \
-u $(id -u):$(id -g) \
-v ${PWD}/examples:/app/examples \
response2schema \
"for f in examples/*.json; do $f ${f//.json/.yaml}; done;"