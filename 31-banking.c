#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAX = 100;
//dinh nghia mot kieu du lieu moi
struct UserBanking{
	char id[40];
	char pwd[40];
	int money;
};

void initUser(struct UserBanking userList[], int *size);
void showMenu(void);
void showInfo(struct UserBanking userList[], int size, int pos);
void withdrawMoney(struct UserBanking userList[], int size, int pos);
void changePwd(struct UserBanking userList[], int size, int pos);


int main()
{
	//tao mang chua cac object duoc tao ra tu UserBanking
	struct UserBanking userList[MAX];
	int size = 0;
	initUser(userList, &size);

	int pos = -1;
	do{

		do{//login
			char userName[MAX];
			char userPwd[MAX];
			printf("\nUSERNAME: ");
			gets(userName);
			printf("\nPASSWORD: ");
			gets(userPwd);

			for(int i = 0; i <= size - 1; i ++){
				if(strcmp(userList[i].id, userName) == 0){
					if(strcmp(userList[i].pwd, userPwd) == 0){
						pos = i;
					}
				}
			}

			if(pos == -1){
				printf("\n!!!Username or Password is wrong!!!");
			}

		}while(pos == -1);
		showMenu();
		int choice;
		char buffer;

		do{
			do{
				printf("\nInput your choice: ");
				scanf("%d", &choice);
				scanf("%c", &buffer);
				fflush(stdin);
				if(buffer != 10){
					printf("\n!!!!!Please input integers!!!!!");
				}
			}while(buffer != 10);

			switch(choice){
				case 1:{
					showInfo(userList, size, pos);
					break;
				}
				case 2:{
					withdrawMoney(userList, size, pos);
					break;
				}
				case 3:{
					changePwd(userList, size, pos);
					pos = -1;
					break;
				}
				case 4:{
					printf("\nGoodbye");
					pos = -1;
					break;
				}
				default:{
					printf("\n>>>>Input from 1 to 4<<<<");
					break;
				}

			}

			if(pos == -1){
				break;
			}

		}while(choice != 4);

	}while(1 == 1);

    return 0;
}

void initUser(struct UserBanking userList[], int *size){
	struct UserBanking diep1;
	strcpy(diep1.id, "diep1");
	strcpy(diep1.pwd, "123");
	diep1.money = 100;

	struct UserBanking diep2;
	strcpy(diep2.id, "diep2");
	strcpy(diep2.pwd, "456");
	diep2.money = 1000;

	userList[0] = diep1;
	userList[1] = diep2;
	*size = 2;
}

void showMenu(void){
	printf("\n!!!!!ATM APPLICATION!!!!!");
	printf("\n1. Show Information of user");
	printf("\n2. Withdraw money");
	printf("\n3. Change password");
	printf("\n4. Sign Out");
}

void showInfo(struct UserBanking userList[], int size, int pos){
	printf("\n!!!!!Infomation of user!!!!!");
	printf("\nID: %s", userList[pos].id);
	printf("\nMoney: %d", userList[pos].money);
}

void withdrawMoney(struct UserBanking userList[], int size, int pos){
	int spendMoney;

	do{
		printf("\nInput the amount of money you want to withdraw: ");
		scanf("%d", &spendMoney);

		if(spendMoney % 50 != 0 || spendMoney < 50 || spendMoney > userList[pos].money){
			printf("\nInput money number format n*50!!!");
		}
	}while(spendMoney % 50 != 0 || spendMoney < 50 || spendMoney > userList[pos].money);

	userList[pos].money -= spendMoney;
	printf("\nMoney left: %d", userList[pos].money);
}

void changePwd(struct UserBanking userList[], int size, int pos){
	char currentPwd[MAX];
	printf("\nInput current password: ");
	gets(currentPwd);
	if(strcmp(currentPwd, userList[pos].pwd) != 0){
		printf("\n!!!Please login again!!!");
		return;
	}
	char newPwd1[MAX];
	char newPwd2[MAX];
	do{
		printf("\nNew password:");
		gets(newPwd1);
		printf("\nConfirm new password: ");
		gets(newPwd2);
		if(strcmp(newPwd1, newPwd2) != 0){
			printf("\nNew password does not match!!!");
		}
	}while(strcmp(newPwd1, newPwd2) != 0);

	strcpy(userList[pos].pwd, newPwd1);
}