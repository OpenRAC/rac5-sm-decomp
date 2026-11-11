extern unsigned char D_00030454[];
extern int D_0003042C;
extern int D_00030430;

void func_020750(void);

void func_016090(void)
{
    if (D_00030454[0] != 0)
    {
        func_020750();
    }
    D_00030454[0] = 0;
    D_0003042C = 0;
    D_00030430 = 0;
}
