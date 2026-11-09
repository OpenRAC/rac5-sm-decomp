/* LEVEL_18:0x0BA5F8 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001B0974;
extern void func_10EC10(void *v);
extern unsigned int D_001A2F34;
extern unsigned int D_001B0948[8];

void func_0BA5F8(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001A2F34 + k * 4;
        *(unsigned int *)(a + 0x864) = D_001B0948[k];
    }
    if (D_001B0974 != 0) {
        func_10EC10(*(void **)(D_001A2F34 + 0x1C6C));
    }
}
