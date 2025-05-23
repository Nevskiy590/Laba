FROM gcc:latest AS build

COPY src/main.cpp /app/main.cpp

WORKDIR /app

RUN g++ -o calculator main.cpp

CMD ["./calculator"]