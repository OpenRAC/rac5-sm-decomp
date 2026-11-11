/* LEVEL_03:0x0CBD08 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_00219CC4;
extern int func_131668(void *v);
extern unsigned int D_0020C62C;
extern unsigned int D_00219C98[8];

void func_0CBD08(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_0020C62C + k * 4;
        *(unsigned int *)(a + 0x864) = D_00219C98[k];
    }
    if (D_00219CC4 != 0) {
        func_131668(*(void **)(D_0020C62C + 0x1C6C));
    }
}
