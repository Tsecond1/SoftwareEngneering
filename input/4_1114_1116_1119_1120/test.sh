#!/bin/bash
# 首先将code文件夹中的readinput.cpp和test.sh复制到指定文件夹中
# （这个过程我用简单的cd操作尝试后发现执行不成功，原因似乎是因为shell脚本
#  会创建一个子shell脚本执行，脱离不了环境路径，暂时不知道该如何解决，
#  这里我是手动将readinput和test.sh复制到对应文件夹的）

# 编译和运行readinput.cpp程序，生成input.txt
g++ readinput.cpp -o readinput
./readinput



# 然后尝试循环处理一个文件夹中的所有OJ程序，两两分组，对比output
