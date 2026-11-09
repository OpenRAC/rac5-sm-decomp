/* LEVEL_23:0x0C2D58 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001D4A44;
extern void func_124A18(void *v);
extern unsigned int D_001C73AC;
extern unsigned int D_001D4A18[8];

void func_0C2D58(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001C73AC + k * 4;
        *(unsigned int *)(a + 0x864) = D_001D4A18[k];
    }
    if (D_001D4A44 != 0) {
        func_124A18(*(void **)(D_001C73AC + 0x1C6C));
    }
}
