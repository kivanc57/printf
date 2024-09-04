#Move to the DockerFileFolder
cd DockerFileFolder

#Build the Docker image use parent directory (..) as the context
docker build -t local-printf:latest -f Dockerfile ..

#Check if the image is created
docker images

#Run the image as a container
docker run --rm local-printf:latest

#Check the container status
docker ps

#Inspect the container interactively with bash
docker run -it local-printf:latest /bin/bash

