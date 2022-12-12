#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{
    string str;
    string a="int";
    string b="char";
    string c="string";
    string comma=",";
    string lp="(";
    string rp=")";
    ifstream myfile("stdin_format.txt");
	ofstream outfile("input.txt");
    while(myfile>>str)
    {
        if(str.find(a) != string::npos)//写入随机int
        {
            srand((unsigned)time(NULL));
            int j=0;
            int _min=0;
            for (int i=str.find(comma)-1;i>str.find(lp);i--)
            {
                _min+=(str[i]-'0')*pow(10,j);
                j++;
            }
            j=0;
            int _max=0;
            for (int i=str.find(rp)-1;i>str.find(comma);i--)
            {
                _max+=(str[i]-'0')*pow(10,j);
                j++;
            }
            outfile<<(rand()%(_max-_min+1)) + _min<<'\t';
        }
        else if(str.find(b) != string::npos)//写入随机char
        {
            srand((unsigned)time(NULL));
            int randnum = rand()%26;
            if (rand()%2) //先随机大小写，再随机具体字母
            {
                outfile<<char(randnum+'a')<<'\t';
            }
            else
            {
                outfile<<char(randnum+'A')<<'\t';
            }
        }
        else if(str.find(c) != string::npos)//写入随机string
        {
            int j=0;
            int _min=0;
            for (int i=str.find(comma)-1;i>str.find(lp);i--)
            {
                _min+=(str[i]-'0')*pow(10,j);
                j++;
            }
            j=0;
            int _max=0;
            for (int i=str.find(rp)-1;i>str.find(comma);i--)
            {
                _max+=(str[i]-'0')*pow(10,j);
                j++;
            }
            srand((unsigned)time(NULL));
            int len=rand()%(_max-_min+1)+_min;
            string sstr;                 //声明用来保存随机字符串的sstr
            char s;                     //声明字符c，用来保存随机生成的字符
            int idx;                    //用来循环的变量
            //循环向字符串中添加随机生成的字符
            for(idx = 0;idx < len;idx ++)
            {
                s =rand()%26+'a';//这里只考虑了小写字母
                sstr.push_back(s); 
            }
            outfile<<sstr<<'\t';
        }
    }
}