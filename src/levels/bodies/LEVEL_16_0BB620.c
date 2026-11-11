/* LEVEL_16:0x0BB620 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001AF4F4;
extern int func_10FF60(void *p);
extern unsigned int D_001A1AB4;
extern unsigned int D_001AF4C8[8];

void func_0BB620(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001A1AB4 + k * 4;
        *(unsigned int *)(a + 0x864) = D_001AF4C8[k];
    }
    if (D_001AF4F4 != 0) {
        func_10FF60(*(void **)(D_001A1AB4 + 0x1C6C));
    }
}
