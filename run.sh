if [ ! -d build ]; then
    cmake -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=On
fi
cmake --build build --parallel \
    && ./build/main
