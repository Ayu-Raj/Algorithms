#include <stdio.h>
#include <string.h>
char stack[10];
int top = -1;
int isempty() {
	if(top==-1)
	return 1;
	else
	return 0;
}
char pop() {
	char data;
	if(!isempty()){
		data = stack[top];
		top-=1;
		return data;
	}
	else {
		printf("Stack is empty");
	}
}
void push(char data){
	top+=1;
	stack[top] = data;
}
void main() {
	char p[10] = "([])[]";
	int i,n,data;
	n = strlen(p);
	for (i=0;i<n;i++){
		if(p[i] == '{' || p[i] == '(' || p[i] == '['){
			push(p[i]);
		}
	
		else{
			if(isempty()){
				printf("Not a balanced parenthesis from emty %d");
				break;
			}
			else{
				if((stack[top] == '{' && p[i]=='}' )||( stack[top] == '(' && p[i]==')') || (stack[top] == '[' && p[i]==']')){
					data = pop();
					continue;
				} 
				else{
						printf("Not a balanced parenthesis");
				break;
				}
				
			}
		}
	}
	if(isempty()){
		printf("Balanced parenthsis");
	}
	else{
		printf("Not balanced parenthesis");
	}
}


