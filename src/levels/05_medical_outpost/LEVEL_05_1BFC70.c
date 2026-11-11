/* LEVEL_05:0x1BFC70 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_00283CB4;
extern int D_001F806C;
extern int D_001F7FA0[];
extern char D_0038FCA0[];
extern char D_0038FDE0[];
extern int func_06C088(int a);

void func_1BFC70(void)
{
    unsigned int i;
    int v;

    v = (D_001F806C & 0xF800FFFF) | (D_00283CB4 << 16);
    D_001F806C = v;
    for (i = 0; i < 3; i++) {
        D_001F7FA0[4 + i * 0x11] = func_06C088(D_001F806C);
    }
    D_0038FCA0[0x138] = 0;
    D_0038FDE0[0xD0] = 0;
}
