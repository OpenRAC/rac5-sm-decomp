extern int D_003157B0[];
extern void func_0B6E90(void);
extern void func_0B6DD0(void);
extern void func_0B70F0(void);

void func_0B6E30(void)
{
    if (D_003157B0[5] == 0 && D_003157B0[12] == 0) {
        if (D_003157B0[21] == 0) *((char *)D_003157B0 + 0x2c) = 0;
    } else {
        func_0B6E90();
        func_0B6DD0();
        func_0B70F0();
    }
}
