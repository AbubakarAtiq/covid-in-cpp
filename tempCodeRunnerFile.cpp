class loadingData//It work, modify it
{
public:
    void main()
    {
        system("color f2");
        cout<<"\n\n\n\t\t\t\tPlease wait while loading\n\n\n\t\t\t\t";
        char a=177,b=219;
        cout<<"\t\t\t\t";
        for(int i=0;i<=15;i++)
            cout<<a;
        cout<<"\r";
        cout<<"\t\t\t\t";
        for(int i=0;i<=15;i++){
            cout<<b;
            for(int j=0;j<=1e8;j++);
        }
        cout<<"\n\n\n\n\n\n\t\t\tMade,A.Atiq:";
        getch();
    }
};