/*compile with dev c++ or gcc version 8.1.0..not with old versions*/
#include<stdio.h>
#include<stdlib.h>
int create_node(int a);
struct node{
	int data;
	struct node* next[20];
};
int main(){
	int n;
	scanf("%d",&n);
	create_node(n);
	
}
int create_node(int a){
	int i,j,s,k,count;
	int top=-1;
	int stack[20];
	struct node *x[a];
	for(i=0;i<a;i++){
		x[i]=(struct node*)malloc(sizeof(struct node));
		x[i]->data=i+1;
		for(j=0;j<20;j++){
			x[i]->next[j]=NULL;
		}
	}
	for(i=0;i<a-1;i++){
		j=0;
		scanf("%d %d",&s,&k);
		while(x[s-1]->next[j]!=NULL){
			j++;
			}
			x[s-1]->next[j]=x[k-1];
			
	}struct node *ptr;
	
	for(i=0;i<=a-1;i++){
		ptr=x[i];
		for(j=0;j<20;j++){
			if(ptr->next[j]==NULL){
				if(top==-1){
					count++;
					break;
				}else{
					if(j==0){
					count++;
					}
				ptr=x[stack[top-1]];
				j=stack[top];
				top=top-2;
				}
			}else{
				top++;
				stack[top++]=(ptr->data-1);
				stack[top]=j;
				ptr=ptr->next[j];
				j=-1;
			}
}
}
  printf("%d",count);

}
