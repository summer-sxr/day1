//
// Created by 孙小容 on 24-10-19.
//
#include <stdio.h>
#include <string.h>
// int main() {
//     int a=20;
//     printf("%d\n",a);
// }

// 变量的作用域
// 1、局部变量->变量所在的局部范围
// int main() {
//     {
//          int a=10;
//          printf("a=%d\n",a);
//      }
//  }
// 2、全局变量->整个工程
//  int a=10;
//  int main() {
//          {
//              printf("%d",a);
//          }
//      printf("%d",a);
//  }
// 变量生命周期
//
// int main() {
//     // int a=10,b=20;
//     int a=0,b=0;
//     printf("Enter a number: ");
//     scanf("%d %d",&a,&b);
//     printf("a=%d b=%d\nc=%d\n",a,b,a+b);
// }

// 常量
// int main() {
//         字面常量
//          30;
//          3.14;
//          'w';//字符
//          "wddd";//
//         const修饰的常变量，无法改变
//          const int a=10;
//          a=20;
//          printf("a=%d\n",a);
//
// }

// define定义的MAx标识符常量
// #define MAX 100
// int main() {
//         printf("%d\n", MAX);
//         int a=MAX;
//         printf("%d\n", a);
// }

// 枚举常量
// enum Color {
//         RED,
//         BLUE,
//         GREE,
// };
// int main() {
//        enum Color color = RED;
//     RED=20
// }

// 字符串末尾输出默认:\0
// int main() {
//     char arr1[]="sdfghjkl";
//     char arr2[]={'a','s','d','f','g','h'};
//     char arr3[]={'q','w','e','f','g','r','\0'};
//     printf("%s\n",arr1);
//     printf("%s\n",arr2);
//     printf("%s\n",arr3);
//     int len=strlen("abcdefg");
//     printf("len=%d\n",len);//求字符长度的一个函数 String len 必须得有头文件#include <string.h>
//     return 0;
// }

// 转义字符
// %d ->打印整型
// %c ->打印字符
// %s ->打印字符串
// %f ->打印float
// %lf ->打印double
// %zu ->打印sizeof的返回值
// int main() {
//     printf("Hello, World!\n");//换行
//     printf("Hello\tWorld!\t\n");//制表
//     printf("Hello\0World!\t");//遇到\0字符结束
//     return 0;
// }

// 选择结构（if else)
// int main() {
//     int input=0;
//     printf("加入比特\n");
//     printf("要好好学习吗（1/0)?");
//     scanf("%d",&input);
//     if(input==1) {
//         printf("offer");
//     }else {
//         printf("失业");
//     }
//     return 0;
//
// }

// 循环结构(while)
// int main() {
//     int line=0;
//     printf("见证真爱\n");
//     while (line<520) {
//         printf("%d次我爱你\n",line);
//         line++;
//     }
//     if(line>=520) {
//         printf("I love you->%d\n",line);
//     }else {
//         printf("继续加油");
//     }
//     return 0;
// }

// 函数调用
// 函数体
// int Add(int x,int y) {
//     int z=0;
//     z=x+y;
//     return z;
// }
// int main() {
//     int i,j;
//     // printf("%d",Add(3,5));
//     printf("请输入两个数的值：");
//     scanf("%d %d",&i,&j);
//     int sum= Add(i,j);
//     printf("%d",sum);
//     return 0;
// }

// 数组
// int main() {
//     int arr[10]={1,2,3,4,5,6,7,8,9};
//     // int i=0;
//     // while (i<10) {
//     //     printf("%d\t",arr[i]);
//     //     i++;
//     // }
//     // for(int j=0;j<10;j++) {
//     //     printf("%d\t",arr[j]);
//     // }
//     printf("%d\n",arr[5]);
//     return 0;
// }

//作业
