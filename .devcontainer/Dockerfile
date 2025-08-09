FROM mcr.microsoft.com/devcontainers/base:ubuntu

# Install dependencies for C development
RUN apt-get update && apt-get install -y \
    build-essential \
    gdb \
    valgrind \
    cmake \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

# Create a non-root user (used by devcontainers)
ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && apt-get update && apt-get install -y sudo \
    && echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME
