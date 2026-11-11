extern int D_002204A4[];
extern int D_002204A0[];
extern char D_002204A8[];

int func_140028(void);
int func_13FE28(int);
extern int func_1401D8(int index);

int func_1400C0(void)
{
    int s1 = 0;
    int v0 = func_140028();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_13FE28(1);
        D_002204A8[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_1401D8(i);
            D_002204A4[0] = -1;
            D_002204A0[0] = 1;
        }
    }
    return s1;
}
