extern unsigned char D_001D3FD0[];
extern int D_001D3FA4;
extern int D_001D3FA8;

extern int func_124508(void);

void func_0BCE00(void)
{
    if (D_001D3FD0[0] != 0)
    {
        func_124508();
    }
    D_001D3FD0[0] = 0;
    D_001D3FA4 = 0;
    D_001D3FA8 = 0;
}
