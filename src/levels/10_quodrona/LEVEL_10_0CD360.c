/* LEVEL_10:0x0CD360 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_0020A644;
extern int func_131120(void *v);
extern unsigned int D_001FCFAC;
extern unsigned int D_0020A618[8];

void func_0CD360(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001FCFAC + k * 4;
        *(unsigned int *)(a + 0x864) = D_0020A618[k];
    }
    if (D_0020A644 != 0) {
        func_131120(*(void **)(D_001FCFAC + 0x1C6C));
    }
}
