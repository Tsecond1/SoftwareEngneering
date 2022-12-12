#!/bin/bash
# 首先将code文件夹中的readinput.cpp和test.sh复制到指定文件夹中
# （这个过程我用简单的cd操作尝试后发现执行不成功，原因似乎是因为shell脚本
#  会创建一个子shell脚本执行，脱离不了环境路径，暂时不知道该如何解决，
#  这里我是手动将readinput和test.sh复制到对应文件夹的）


# 编译和运行readinput.cpp程序，生成input.txt
g++ readinput.cpp
./readinput

# 编译和运行两个oj程序（以input.txt为输入，输出分别放在output1和output2中）
g++ 48762087.cpp -o 48762087
./48762087 <input.txt >output1.txt
g++ 84822638.cpp -o 84822638
./84822638 <input.txt >output2.txt

# 对比output1和output2(output2和output3)
diff -q output1.txt output2.txt

diff -q output2.txt output3.txt

# output不同则写入inequal.csv, output相同则写入equal.csv
echo "input/4A/48762087.cpp" "input/4A/84822638.cpp"> inequal.csv

echo "input/4A/84822638.cpp" "input/4A/84822639.cpp"> equal.csv