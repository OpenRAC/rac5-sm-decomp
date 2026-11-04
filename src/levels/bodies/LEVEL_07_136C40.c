extern int D_0021B384[];
extern int D_0021B380[];
extern char D_0021B388[];

int func_136BA8(void);
int func_1369A8(int);
void func_136D58(int);

int func_136C40(void)
{
    int s1 = 0;
    int v0 = func_136BA8();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_1369A8(1);
        D_0021B388[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_136D58(i);
            D_0021B384[0] = -1;
            D_0021B380[0] = 1;
        }
    }
    return s1;
}
