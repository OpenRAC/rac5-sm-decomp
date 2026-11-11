extern unsigned char D_00200BD0[];
extern int D_00200BA4;
extern int D_00200BA8;

extern int func_132D90(void);

void func_0C6060(void)
{
    if (D_00200BD0[0] != 0)
    {
        func_132D90();
    }
    D_00200BD0[0] = 0;
    D_00200BA4 = 0;
    D_00200BA8 = 0;
}
