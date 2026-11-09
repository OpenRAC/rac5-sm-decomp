/* LEVEL_15:0x0AC568 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001562C4;
extern void func_0F2168(void *v);
extern unsigned int D_00148C2C;
extern unsigned int D_00156298[8];

void func_0AC568(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_00148C2C + k * 4;
        *(unsigned int *)(a + 0x864) = D_00156298[k];
    }
    if (D_001562C4 != 0) {
        func_0F2168(*(void **)(D_00148C2C + 0x1C6C));
    }
}
