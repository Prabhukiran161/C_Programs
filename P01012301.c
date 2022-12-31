void main()
{
    int i,n,sum=0,rem,rev=0,temp1,temp2;
    printf("Enter five digit number:");
    scanf("%d",&n);
    temp1=n;
    //sum of five digit number
    for(i=0;i<5;i++)
    {
      rem=n%10;
      sum=sum+rem;
      n=n/10; 
    }
    printf("Sum of Five digit Number:%d",sum);
    //reverse of five digit number
    sum=0,temp2=temp1;
    for(i=5;i>0;i--)
    {
     rem=temp1%10;
     rev=rev*10+rem;
     temp1=temp1/10;   
    }
    printf("\nReverse of %d is %d",temp2,rev);
}