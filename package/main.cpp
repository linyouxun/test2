
#include<iostream>
using namespace std;
#define MAXSIZE 1000
int f[MAXSIZE+1],c[MAXSIZE+1],w[MAXSIZE+1];
int main(int argc,char *argv[])
{
	int N,V;
	cin>>N>>V;
	int i=1;
	for(;i<=N;++i)
	{
		cin>>c[i]>>w[i];
	}
	for(i=1;i<=N;++i)
	{
		for(int v=V;v>=c[i];--v)//c[i]���Ż�Ϊbound,bound=max{V-sumc[i,...n],c[i]}
		{
			f[v]=(f[v]>f[v-c[i]]+w[i])?f[v]:f[v-c[i]]+w[i];
		}
	}
	//��i=Nʱ����������ѭ����������F[V]
	cout<<f[V]<<'\n';
	system("pause");
	return 0;
}