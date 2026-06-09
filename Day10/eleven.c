void tower(int n , char src,char aux,char des)
    {
        if(n==1)
        {
            printf(src+"=>"+des);
            return;}
        tower(n-1,src,des,aux);
        tower(1,src,aux,des);
        tower(n-1,aux,src,des);
    }
    int main()
    {
    	char src='A',aux='B',des='C';
        int n = 3
        printf("Number of moves:"+(Math.pow(2, n)-1));
        tower(n,src,aux,des);
    }

