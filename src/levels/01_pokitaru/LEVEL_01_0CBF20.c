/* LEVEL_01:0x0CBF20 -- copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_00201644;
extern int func_1332A0(void *v);
extern unsigned int D_001F3FAC;
extern unsigned int D_00201618[8];

void func_0CBF20(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001F3FAC + k * 4;
        *(unsigned int *)(a + 0x864) = D_00201618[k];
    }
    if (D_00201644 != 0) {
        func_1332A0(*(void **)(D_001F3FAC + 0x1C6C));
    }
}
