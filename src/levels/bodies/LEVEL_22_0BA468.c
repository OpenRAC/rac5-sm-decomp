/* LEVEL_22:0x0BA468 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001609C4;
extern int func_10A770(void *v);
extern unsigned int D_0015332C;
extern unsigned int D_00160998[8];

void func_0BA468(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_0015332C + k * 4;
        *(unsigned int *)(a + 0x864) = D_00160998[k];
    }
    if (D_001609C4 != 0) {
        func_10A770(*(void **)(D_0015332C + 0x1C6C));
    }
}
