Build the Docker image

`docker build -f Dockerfile -t local-printf:latest .`

Check if the image is created

`docker images`

Run the image as a container

`docker run --rm local-printf:latest`

Check the container status

`docker ps`

Inspect the container interactively with bash

`docker run -it local-printf:latest /bin/bash`
