void main(void)
{
	int a,b,c;
	float d,e;
	printf("Enter three integers:");
	scanf("%d,%d,%d",&a,&b,&c);
	printf("\the maxinum of them is %d\n",max(a,b,c));
	printf("Enter two floating point numbers:");
	scanf("%f,%f",&d,&e);
	printf("\nthe sum of them is %f\n",sum(d,e));
	return 0;
}
int max(int x,int y,int z)
{ 
	int t;
	if(x>y) 
	 t=x;
	 else
	 t=y;
	 return t;
}
float sum(float x, float y)
{
	return x+y;
}
