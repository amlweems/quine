#define S(x) #x
char *c=S(int main(){printf(S(#define S(x) #x)"\nchar *c=S(%s);%s",c,c);});int main(){printf(S(#define S(x) #x)"\nchar *c=S(%s);%s",c,c);}