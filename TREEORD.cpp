#include<bits/stdc++.h>
using namespace std;
struct node{
	struct node *left,*right;
	int data;
};
int pre[8005],in[8005],post[8005];
int n,x=0,flag=0;
struct node *create(int data)
{
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->left=NULL;
	ptr->right=NULL;
	ptr->data=data;
	return ptr;
}
struct node *tree(int pri,int prj,int ini,int inj)
{
	int k;
	struct node *ptr=NULL;
	if(pri<0 || pri>n-1 || prj<0 || prj>n-1 || ini<0 || ini>n-1 || inj<0 || inj>n-1 || pri>prj || ini>inj )
	return NULL;
	k=pre[pri];
	ptr=create(k);
	if(pri==prj)
	{
		return ptr;
	}

	for(int c=ini;c<=inj;c++)
	{
		if(in[c]==k)
		{

			ptr->left=tree(pri+1,pri+c-ini,ini,c-1);
			ptr->right=tree(pri+c-ini+1,prj,c+1,inj);
		}
	}
	return ptr;
}
void postorder(struct node *root)
{
if(!root)
return ;
else
{
	postorder(root->left);

	postorder(root->right);
	if(post[x]!=root->data)
	{
		flag=1;
		return;
	}
	else
	x++;
	}
}
void inorder(struct node *root)
{
if(!root)
return ;
else
{
	inorder(root->left);
	cout<<root->data<<"  ";
	inorder(root->right);
	}
}
void preorder(struct node *root)
{
if(!root)
return ;
else
{
	cout<<root->data<<"  ";
	preorder(root->left);
	preorder(root->right);
	}
}
int main()
{
int i;
cin>>n;
for(i=0;i<n;i++)
cin>>pre[i];
for(i=0;i<n;i++)
cin>>post[i];
for(i=0;i<n;i++)
cin>>in[i];
struct node *root=NULL;
root= tree(0,n-1,0,n-1);
postorder(root);
if(flag==0)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;

}
