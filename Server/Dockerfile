FROM ubuntu:bionic
RUN apt-get update && apt-get upgrade -y && apt-get install -y \
    apt-utils gcc g++ openssh-server cmake build-essential gdb gdbserver rsync vim git ninja-build

#ADD . /dev/project/x2
#WORKDIR /dev/project/x2

ADD . /build
WORKDIR /build

RUN git clone https://github.com/mangpeng/TestX2.git /build/x2
#RUN cmake -DCMAKE_BUILD_TYPE=Release -G Ninja -S /build/x2 -B /build/x2
#RUN cmake --build /build/x2 --target x2

RUN git clone [Project] /dev/Project
RUN cmake -DCMAKE_BUILD_TYPE=Debug -Dx2=/x2 -G Ninja -S /dev/Project -B /dev/Project/Server/cmake-build
RUN cmake --build /dev/ctserver/cmake-build --target ctserver
