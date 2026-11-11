/* LEVEL_05:0x0CA4C8 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_001F09C4;
extern int func_12EC18(void *v);
extern unsigned int D_001E332C;
extern unsigned int D_001F0998[8];

void func_0CA4C8(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_001E332C + k * 4;
        *(unsigned int *)(a + 0x864) = D_001F0998[k];
    }
    if (D_001F09C4 != 0) {
        func_12EC18(*(void **)(D_001E332C + 0x1C6C));
    }
}
