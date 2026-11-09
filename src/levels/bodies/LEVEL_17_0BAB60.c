/* LEVEL_17:0x0BAB60 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001A2AF4;
extern void func_10F4D8(void *v);
extern unsigned int D_001950B4;
extern unsigned int D_001A2AC8[8];

void func_0BAB60(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001950B4 + k * 4;
        *(unsigned int *)(a + 0x864) = D_001A2AC8[k];
    }
    if (D_001A2AF4 != 0) {
        func_10F4D8(*(void **)(D_001950B4 + 0x1C6C));
    }
}
