/* LEVEL_09:0x0C91D0 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001EB444;
extern void func_12C238(void *v);
extern unsigned int D_001DDDAC;
extern unsigned int D_001EB418[8];

void func_0C91D0(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001DDDAC + k * 4;
        *(unsigned int *)(a + 0x864) = D_001EB418[k];
    }
    if (D_001EB444 != 0) {
        func_12C238(*(void **)(D_001DDDAC + 0x1C6C));
    }
}
