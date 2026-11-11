extern unsigned char D_0015FF50[];
extern int D_0015FF24;
extern int D_0015FF28;

extern int func_10A260(void);

void func_0B4510(void)
{
    if (D_0015FF50[0] != 0)
    {
        func_10A260();
    }
    D_0015FF50[0] = 0;
    D_0015FF24 = 0;
    D_0015FF28 = 0;
}
