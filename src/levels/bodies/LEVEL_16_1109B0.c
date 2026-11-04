extern int D_001B4B94[];
extern int D_001B4B90[];
extern char D_001B4B98[];

int func_110918(void);
int func_110718(int);
void func_110AC8(int);

int func_1109B0(void)
{
    int s1 = 0;
    int v0 = func_110918();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_110718(1);
        D_001B4B98[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_110AC8(i);
            D_001B4B94[0] = -1;
            D_001B4B90[0] = 1;
        }
    }
    return s1;
}
