extern unsigned char D_001AFDC8[];
extern int D_001AFD9C;
extern int D_001AFDA0;

void func_110298(void);

void func_0B45A8(void)
{
    if (D_001AFDC8[0] != 0)
    {
        func_110298();
    }
    D_001AFDC8[0] = 0;
    D_001AFD9C = 0;
    D_001AFDA0 = 0;
}
