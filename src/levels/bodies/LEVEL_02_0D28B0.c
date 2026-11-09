/* LEVEL_02:0x0D28B0 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_00216604;
extern void func_139650(void *v);
extern unsigned int D_00208C2C;
extern unsigned int D_002165D8[8];

void func_0D28B0(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_00208C2C + k * 4;
        *(unsigned int *)(a + 0x864) = D_002165D8[k];
    }
    if (D_00216604 != 0) {
        func_139650(*(void **)(D_00208C2C + 0x1C6C));
    }
}
