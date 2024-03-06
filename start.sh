#!/bin/bash

# 获取传入的文件参数
file=$1

# 检查参数是否为空
if [ -z "$file" ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

# 检查文件是否存在
if [ ! -f "$file" ]; then
    echo "File not found: $file"
    exit 1
fi

# 提取文件名和扩展名
filename=$(basename -- "$file")
extension="${filename##*.}"

# 检查文件类型是否为 C++ 源文件
if [ "$extension" != "cpp" ]; then
    echo "File is not a C++ source file: $file"
    exit 1
fi

# 编译并运行程序
g++ -o "${filename%.*}" "$file" -std=c++17 && ./"${filename%.*}"
