/* LEVEL_08:0x0D6EC8 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_0024A504;
extern void func_1447D8(void *v);
extern unsigned int D_0023CB2C;
extern unsigned int D_0024A4D8[8];

void func_0D6EC8(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_0023CB2C + k * 4;
        *(unsigned int *)(a + 0x864) = D_0024A4D8[k];
    }
    if (D_0024A504 != 0) {
        func_1447D8(*(void **)(D_0023CB2C + 0x1C6C));
    }
}
