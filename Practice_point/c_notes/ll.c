#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

node *ins_beg(node*,int);
node* ins_end(node*,int);
void disp(node*);
void dis_rec(node*);
node *rev(node* ptr);
node *del_beg(node*);

int main()
{
	node *start=NULL;
	int select,data;
	while(1)
	{
		printf("1-disp 2-disp-recursive 3-ins_beg 4-ins_end 5-rev 6-del_beg 7-exit\n");
		scanf("%d",&select);
		switch(select)
		{
			case 1:
				printf("\n------List Display------\n");
				disp(start);
				printf("------List Ended--------\n\n");
				break;
			case 2:
				printf("\n------List Display------\n");
				dis_rec(start);
				printf("------List Ended--------\n\n");
				break;
			case 3:
				printf("Enter data: \n");
				scanf("%d",&data);
				start=ins_beg(start,data);
				break;
			case 4:
				printf("Enter data: \n");
				scanf("%d",&data);
				start=ins_end(start,data);
				break;
			case 5:
				start=rev(start);
				break;
			case 6:
				start=del_beg(start);
				break;
			case 7:
				exit(0);
		}
	}
}
void disp(node *ptr)
{
	while(ptr)
	{
		printf("Data: %d\n",ptr->data);
		ptr=ptr->next;
	}
}
node *ins_beg(node* ptr,int data)
{
	if(ptr==NULL)
	{
		ptr=malloc(sizeof(node));
		ptr->data=data;
		ptr->next=NULL;
		return ptr;
	}
	else
	{
		node *temp=malloc(sizeof(node));
		temp->next=ptr;
		temp->data=data;
		return temp;
	}
}
node *rev(node* ptr)
{
	node *p,*q,*r;
	q=NULL;
	p=ptr;
	while(p)
	{
		r=p->next;
		p->next=q;
		q=p;
		p=r;
	}
	return q;
}
node *ins_end(node *ptr,int data)
{
	node *pcur,*ptemp;
	ptemp=malloc(sizeof(node));
	pcur=ptr;
	ptemp->next=NULL;
	ptemp->data=data;
	if(pcur)
	{
		while(pcur->next)
		{
			pcur=pcur->next;
		}
		pcur->next=ptemp;
	}
	else
	{
		return ptemp;
	}
	return ptr;
}
void dis_rec(node* ptr)
{
	if(!ptr)
		return;
	printf("data: %d\n",ptr->data);
	dis_rec(ptr->next);
}
node *del_beg(node *ptr)
{
	node *temp=ptr->next;
	free(ptr);
	return temp;
}
