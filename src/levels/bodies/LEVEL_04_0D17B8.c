/* LEVEL_04:0x0D17B8 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_0021AB04;
extern void func_13F720(void *v);
extern unsigned int D_0020D12C;
extern unsigned int D_0021AAD8[8];

void func_0D17B8(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_0020D12C + k * 4;
        *(unsigned int *)(a + 0x864) = D_0021AAD8[k];
    }
    if (D_0021AB04 != 0) {
        func_13F720(*(void **)(D_0020D12C + 0x1C6C));
    }
}
