#include<stdio.h>
#include<string.h>
int main()
{
	menu();
	return 0;
}

int menu()/* 界面*/
{
	int num;
	while(1){
		printf(" \n\n                    \n\n");
		printf("  ******************************************************\n");
		printf("  *                学生信息管理系统                    * \n");
		printf("  ******************************************************\n");
		printf("  *******************系统功能菜单***********************\n");
		printf("     *********************************************\n");
		printf("     * 1.增加学生信息    * *  2.浏览学生信息     *  \n");
		printf("     *********************************************\n");
		printf("     * 3.查询学生信息    * *  4.删除学生信息     *  \n");
		printf("     *********************************************\n");
		printf("     * 5.修改学生信息    * *  6.统计学生成绩     *  \n");
		printf("     *********************************************\n");
		printf("     * 7.退出系统        * *  请选择菜单编号:    *  \n");
		printf("     *********************************************\n");

		scanf("%d", &num);

		switch (num){

		case 1:
			/*	add(); 		增加学生记录*/
			break;
		case 2:{
			while(1){
				int a;
				printf("1:按学号浏览 2：按总分浏览 3:退出浏览\n");
				if ( scanf(" %d",&a) == 1 ){
							if( a == 3 ){
								break;
							}
							else if ( a == 1 ){
								/*	browse1();	按学号浏览方法*/	
							}
							else if ( a == 2 ){
								/*	browse2();	按总分浏览方法*/ 
							}
							else{
								printf("输入错误，没有该选项！\n");
							}
				}
				else{
					printf("输入错误，请重新输入!\n");
					a=0;
					continue;
				}
			}
			break;
		}
		case 3:{
			while(1){
				int b;
				printf("1:按学号查询 2：按姓名查询 3:退出查询\n");
				if ( scanf(" %d",&b) == 1 ){
							if( b == 3 ){
								break;
							}
							else if ( b == 1 ){
								/*	inquire1();	按学号查询方法*/	
							}
							else if ( b == 2 ){
								/*	inquire2();	按姓名查询方法*/ 
							}
							else{
								printf("输入错误，没有该选项！\n");
							}
				}
				else{
					printf("输入错误，请重新输入!\n");
					b=0;
					continue;
				}
			}
			break;
		}
		case 4:{
			while(1){
				int c;
				printf("1:按学号删除 2：按姓名删除 3:退出删除\n");
				if ( scanf(" %d",&c) == 1 ){
							if( c == 3 ){
								break;
							}
							else if ( c == 1 ){
								/*	del1();	按学号查询方法*/	
							}
							else if ( c == 2 ){
								/*	del2();	按姓名查询方法*/ 
							}
							else{
								printf("输入错误，没有该选项！\n");
							}
				}
				else{
					printf("输入错误，请重新输入!\n");
					c=0;
					continue;
				}
			}
			break;
		}
		case 5:{
			while(1){
				int d;
				printf("1:按学号修改 2：按姓名修改 3:退出修改\n");
				if ( scanf(" %d",&d) == 1 ){
							if( d == 3 ){
								break;
							}
							else if ( d == 1 ){
								/*	display1();	按学号修改方法*/	
							}
							else if ( d == 2 ){
								/*	display2();	按姓名修改方法*/ 
							}
							else{
								printf("输入错误，没有该选项！\n");
							}
				}
				else{
					printf("输入错误，请重新输入!\n");
					d=0;
					continue;
				}
			}
			break;
		}
		case 6:{
			while(1){
				int e;
				printf("1:按语文统计 2：按数学统计  3:按英语统计 4:退出统计\n");
				if ( scanf(" %d",&e) == 1 ){
							if( e == 4 ){
								break;
							}
							else if ( e == 1 ){
								while(1){
								int e1;
								printf("1:语文总分 2:语文平均分 3:语文最高分 4:语文最低分 5:退出\n");
									if ( scanf(" %d",&e1) == 1 ){
										if( e1 == 5 ){
											break;
										}
										else if( e1 == 1 ){
											/*	statistics1-1(); 	语文总分*/
										}
										else if( e1 == 2 ){
											/*	statistics1-2(); 	语文平均分*/
										}
										else if( e1 == 3 ){
											/*	statistics1-3(); 	语文最高分*/
										}
										else if( e1 == 4 ){
											/*	statistics1-4(); 	语文最低分*/
										}
										else{
											printf("输入错误，没有该选项！\n");
										}
									}
									else{
										printf("输入错误，请重新输入!\n");
										e1=0;
										continue;
									}
								}	
							}
							else if ( e == 2 ){
								while(1){
								int e2;
								printf("1:数学总分 2:数学平均分 3:数学最高分 4:数学最低分 5:退出\n");
									if ( scanf(" %d",&e2) == 1 ){
										if( e2 == 5 ){
											break;
										}
										else if( e2 == 1 ){
											/*	statistics2-1(); 	数学总分*/
										}
										else if( e2 == 2 ){
											/*	statistics2-2(); 	数学平均分*/
										}
										else if( e2 == 3 ){
											/*	statistics2-3(); 	数学最高分*/
										}
										else if( e2 == 4 ){
											/*	statistics2-4(); 	数学最低分*/
										}
										else{
											printf("输入错误，没有该选项！\n");
										}
									}
									else{
										printf("输入错误，请重新输入!\n");
										e2=0;
										continue;
									}
								}
							}
							else if ( e == 3 ){
								while(1){
								int e3;
								printf("1:英语总分 2:英语平均分 3:英语最高分 4:英语最低分 5:退出\n");
									if ( scanf(" %d",&e3) == 1 ){
										if( e3 == 5 ){
											break;
										}
										else if( e3 == 1 ){
											/*	statistics3-1(); 	英语总分*/
										}
										else if( e3 == 2 ){
											/*	statistics3-2(); 	英语平均分*/
										}
										else if( e3 == 3 ){
											/*	statistics3-3(); 	英语最高分*/
										}
										else if( e3 == 4 ){
											/*	statistics3-4(); 	英语最低分*/
										}
										else{
											printf("输入错误，没有该选项！\n");
										}
									}
									else{
										printf("输入错误，请重新输入!\n");
										e3=0;
										continue;
									}
								}
							}
				}
				else{
					printf("输入错误，请重新输入6!\n");
					e=0;
					continue;
				}
			}
			break;
		}
		case 7:
			printf("退出系统成功\n");
			return 0;   
		default:printf("输入错误,请重新输入\n");
		}
	}
}
