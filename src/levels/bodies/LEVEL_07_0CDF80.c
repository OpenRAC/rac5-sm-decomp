/* LEVEL_07:0x0CDF80 -- placement copy of LEVEL_01_0CBF20.c: copies eight table pointers into a block behind a global pointer, then calls a helper when a flag is set. */
extern unsigned char D_00215944;
extern void func_1362A0(void *v);
extern unsigned int D_002082AC;
extern unsigned int D_00215918[8];

void func_0CDF80(void)
{
    unsigned int k;
    unsigned int a;

    for (k = 0; k < 8; k++) {
        a = D_002082AC + k * 4;
        *(unsigned int *)(a + 0x864) = D_00215918[k];
    }
    if (D_00215944 != 0) {
        func_1362A0(*(void **)(D_002082AC + 0x1C6C));
    }
}
