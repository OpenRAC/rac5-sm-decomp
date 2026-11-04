extern int D_00117254[];
extern int D_00117250[];
extern char D_00117258[];

int func_0E3700(void);
int func_0E3500(int);
void func_0E38B0(int);

int func_0E3798(void)
{
    int s1 = 0;
    int v0 = func_0E3700();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_0E3500(1);
        D_00117258[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_0E38B0(i);
            D_00117254[0] = -1;
            D_00117250[0] = 1;
        }
    }
    return s1;
}
