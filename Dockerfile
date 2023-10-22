# Build and run:
# docker build -t message_lib -f S:\Message_lib\Dockerfile .
# docker run -d --cap-add sys_ptrace -p127.0.0.1:2222:22 --name msgLib message_lib

FROM ubuntu:latest

RUN DEBIAN_FRONTEND="noninteractive" apt-get update && apt-get -y install tzdata

RUN apt-get update \
  && apt-get install -y build-essential \
      pip \
      gcc \
      g++ \
      gdb \
      clang \
      make \
      cmake \
      automake \
      libtool \
      valgrind \
      tar \
  && apt-get clean