#include<stdio.h>
#include<string.h>
int window();
int main()
{
	if(0 ==window())
		return -1;
	printf("Welcome to the student management system\n");
	return 0;
}
int window()
{
	char a[10],b[10],c[10],d[10];
	while(1){
		int num;
		printf("***************学生信息管理系统******************\n");
		printf("************************************************\n");
		printf("****************** 1:注册 **********************\n");
		printf("****************** 2:登陆 **********************\n");
		printf("****************** 3:退出 **********************\n");
		printf("************************************************\n");
		if( scanf(" %d",&num) == 1 ){
			switch(num){
				case 1:{
					while(1){
						int m;
						printf("1:注册帐号 2:退出注册\n");
						if ( scanf(" %d",&m) == 1 ){
							if( m == 2 ){
								break;
							}
							else if ( m == 1 ){
								printf("注册账户：");
								getchar();
								gets(a);
								printf("设置密码：");
								gets(b);
								printf("注册完成，请返回登陆！\n");
								
							}
							else{
								printf("没有该选项，请重新输入1！\n");
							}
						}
						else{
							printf("输入错误，请重新运行2!\n");
							m=0;
							continue;
						}
					}
					break;
				}
				case 2:{
					while(1){
						int n;
						printf("1:登陆帐号 2:退出登陆\n");
						if ( scanf(" %d",&n) == 1 ){
							if( n == 2 )
								break;
							else if ( n == 1 ){
								printf("输入账户：");
								getchar();
								gets(c);
								printf("输入密码：");
								gets(d);
								if ( (strcmp(a,c)==0) && (strcmp(b,d)==0) ) {
									printf("登陆成功！\n");
									return 1;
								}
								else{
									printf("账户或密码错误!\n");
								}
							}
							else{
								printf("输入错误，没有该选项！3\n");
							}	
						}
						else{
							printf("输入错误，请重新运行!4\n");
							n=0;
							continue;
						}
					}
					break;
				}
				case 3:{
					printf("退出成功！\n");
					return 0;
				}
				default:
				printf("输入错误，没有该选项!5\n");
			}
		}
		else{
			printf("输入错误，请重新运行!6\n");
			num=0;
			continue;
		}
	}


return 0;
}
