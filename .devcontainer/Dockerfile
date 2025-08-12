FROM mcr.microsoft.com/devcontainers/base:ubuntu

# Install dependencies for C development
RUN apt-get update && apt-get install -y \
    build-essential \
    gdb \
    valgrind \
    cmake \
    libcjson-dev \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

# Create a non-root user (used by devcontainers)
ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN groupadd -g 1000 vscode || true \
    && id -u vscode &>/dev/null || useradd -u 1000 -g 1000 -m vscode \
    && apt-get update && apt-get install -y sudo \
    && echo "vscode ALL=(ALL) NOPASSWD:ALL" > /etc/sudoers.d/vscode \
    && chmod 0440 /etc/sudoers.d/vscode
