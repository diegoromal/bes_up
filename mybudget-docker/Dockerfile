#The Flask application container will use python:3.10-alpine as the base image
FROM python:bullseye

#This command will create the working directory for our Python Flask application Docker image
WORKDIR /app

#This command will copy the dependencies and libraries in the requirements.txt to the working directory
COPY ./app/requirements.txt /app

#This command will install the dependencies in the requirements.txt to the Docker image
RUN apt update && apt upgrade -y
RUN pip install pip --upgrade
RUN pip install -r requirements.txt --no-cache-dir

#This command will copy the files and source code required to run the application
COPY ./app /app

#This command will start the Python Flask application Docker container
CMD python myindex.py
