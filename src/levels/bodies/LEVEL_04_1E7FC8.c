/* LEVEL_04:0x1E7FC8 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_002B25F4;
extern int D_002229E4;
extern int D_00222918[];
extern char D_003B3F38[];
extern char D_003B4078[];
extern int func_070000(int a);

void func_1E7FC8(void)
{
    unsigned int i;
    int v;

    v = (D_002229E4 & 0xF800FFFF) | (D_002B25F4 << 16);
    D_002229E4 = v;
    for (i = 0; i < 3; i++) {
        D_00222918[4 + i * 0x11] = func_070000(D_002229E4);
    }
    D_003B3F38[0x138] = 0;
    D_003B4078[0xD0] = 0;
}
