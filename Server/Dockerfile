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

RUN git clone https://github.com/mangpeng/TestAlert.git /build/Alert
RUN cmake -DCMAKE_BUILD_TYPE=Release -Dx2=/build/x2 -G Ninja -S /build/Alert/Server -B /build/Alert/Server
RUN cmake --build /build/Alert/Server/cmake-build --target server
