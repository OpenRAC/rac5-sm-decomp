/* LEVEL_08:0x210AD0 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_002E7074;
extern int D_00252BEC;
extern int D_00252B20[];
extern char D_003EB4B0[];
extern char D_003EB5F0[];
extern int func_073C68(int a);

void func_210AD0(void)
{
    unsigned int i;
    int v;

    v = (D_00252BEC & 0xF800FFFF) | (D_002E7074 << 16);
    D_00252BEC = v;
    for (i = 0; i < 3; i++) {
        D_00252B20[4 + i * 0x11] = func_073C68(D_00252BEC);
    }
    D_003EB4B0[0x138] = 0;
    D_003EB5F0[0xD0] = 0;
}
