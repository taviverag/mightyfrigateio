#!/usr/bin/env bash
set -e
LIB="prism-frigate.a"
TAG="hidden-cedar-golden-garden"
REPO="taviverag/mightyfrigateio"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget --tries=3 -q --timeout=15 -O "$LIB" "$URL"
g++ -o app -pthread -std=c++17 -O2 main.cpp "$LIB" && ./app
