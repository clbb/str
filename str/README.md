strcpy
相对与两个不同的字符串进行拷贝，将src的内容拷入dst中
特例：
strcpy(dst,dst+4);
同在一个字符串中，平台不同运行结果不同
vs 可以 没有用临时变量
linux 不可以 由于开辟了临时变量(pdst = dst; *pst++ = *src++; return pdst;)，申请和释放的大小不一致
strcpy(dst+4,dst)
都报错。

memcpy
相对与内存的操作，会发生内存重叠的问题
内存重叠：
位置：	src < dst   =>  src-dst < m(重叠的个数)
 
数组和指针的区别：
char*p = "123456";   不可修改
char p[] = "123456"; 可以修改

数组的范围在使用前必须是给定的
数组越界访问：
1 int a[] = {1,2,3};
  printf("%d\n",a[3]);

  Linux 报waring可以运行
  vs 可以运行
2 void func(int a)
{
	//int a = 4;
	int ar[a] = {1,2,3};
	printf("%d\n",ar[1]);
}
数组的范围必须在编译前给定

数组指针  char (*p)[]
二维数组指针 char(*p) [][4]   
为什么二维数组要确定列：
确定行并不知道一行可以放多少个元素
eg:char p[3][]一共有24个  只知道有3行，并不知道一行放多少个10 10 4 这并不符合二维数组的定义
