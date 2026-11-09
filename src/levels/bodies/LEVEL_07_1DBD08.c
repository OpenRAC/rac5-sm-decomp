/* LEVEL_07:0x1DBD08 -- merges a 16-bit field into a packed global word, then stores the helper result twice. */
extern int D_0021DCEC;
extern int D_002AD6F4;
extern int D_0021DCB8;
extern int D_0021DC70;
int func_06F2A0(int arg);

void func_1DBD08(void)
{
    int v;

    D_0021DCEC = (D_0021DCEC & 0xF800FFFF) | (D_002AD6F4 << 16);
    v = func_06F2A0(D_0021DCEC);
    D_0021DCB8 = v;
    D_0021DC70 = v;
}
