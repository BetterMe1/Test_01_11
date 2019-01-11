/*
date：2019/01/11
author:BetterMe1
program:转移表实现计算器
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//数指针数组的指针
//指向函数指针数组的指针是一个 指针 指针指向一个 数组 ，数组的元素都是 函数指针;

int add(int a, int b){
	return a + b;
}int sub(int a, int b){
	return a - b;
}int mul(int a, int b){
	return a * b;
}int divide(int a, int b){
	return a / b;
}
int main(){
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, add, sub, mul, divide }; //转移表
	while (input){
		printf("*************************\n");
		printf(" 1:add           2:sub \n");
		printf(" 3:mul           4:div \n");
		printf("*************************\n");
		printf("请选择：");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1)){
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else{
			printf("输入有误\n");
		}
		printf("ret = %d\n", ret);
	}
	system("pause");
	return 0;
}