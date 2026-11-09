/* LEVEL_19:0x0BAEF8 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001B0674;
extern void func_110600(void *v);
extern unsigned int D_001A2C34;
extern unsigned int D_001B0648[8];

void func_0BAEF8(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001A2C34 + k * 4;
        *(unsigned int *)(a + 0x864) = D_001B0648[k];
    }
    if (D_001B0674 != 0) {
        func_110600(*(void **)(D_001A2C34 + 0x1C6C));
    }
}
