extern int D_0015B9E4[];
extern int D_0015B9E0[];
extern char D_0015B9E8[];

int func_0F2A70(void);
int func_0F2870(int);
extern int func_0F2C20(int index);

int func_0F2B08(void)
{
    int s1 = 0;
    int v0 = func_0F2A70();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_0F2870(1);
        D_0015B9E8[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_0F2C20(i);
            D_0015B9E4[0] = -1;
            D_0015B9E0[0] = 1;
        }
    }
    return s1;
}
