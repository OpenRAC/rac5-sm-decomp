/* LEVEL_06:0x0C6820 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001F0544;
extern int func_129970(void *v);
extern unsigned int D_001E2EAC;
extern unsigned int D_001F0518[8];

void func_0C6820(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001E2EAC + k * 4;
        *(unsigned int *)(a + 0x864) = D_001F0518[k];
    }
    if (D_001F0544 != 0) {
        func_129970(*(void **)(D_001E2EAC + 0x1C6C));
    }
}
