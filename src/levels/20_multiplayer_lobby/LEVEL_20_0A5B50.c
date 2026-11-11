/* LEVEL_20:0x0A5B50 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_00111BD4;
extern int func_0E2D48(void *p);
extern unsigned int D_00104194;
extern unsigned int D_00111BA8[8];

void func_0A5B50(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_00104194 + k * 4;
        *(unsigned int *)(a + 0x864) = D_00111BA8[k];
    }
    if (D_00111BD4 != 0) {
        func_0E2D48(*(void **)(D_00104194 + 0x1C6C));
    }
}
