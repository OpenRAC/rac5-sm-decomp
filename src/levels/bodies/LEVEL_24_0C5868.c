/* LEVEL_24:0x0C5868 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001D22C4;
extern int func_128DA0(void *v);
extern unsigned int D_001C4C2C;
extern unsigned int D_001D2298[8];

void func_0C5868(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001C4C2C + k * 4;
        *(unsigned int *)(a + 0x864) = D_001D2298[k];
    }
    if (D_001D22C4 != 0) {
        func_128DA0(*(void **)(D_001C4C2C + 0x1C6C));
    }
}
