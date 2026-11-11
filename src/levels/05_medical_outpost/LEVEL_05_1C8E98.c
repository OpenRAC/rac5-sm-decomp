/* LEVEL_05:0x1C8E98 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_00283C80;
extern int D_001F85BC;
extern unsigned int D_001F85B8;
extern char D_001F8588[];
extern char D_001F85A8[];
extern char D_001C8F78[];
unsigned int func_1C0A30(unsigned int a, char *b, char *c, char *d);
unsigned int func_0E0DA8(unsigned int a);

void func_1C8E98(void)
{
    if (D_001F85BC == -1) {
        D_001F85BC = func_1C0A30((D_00283C80.w_12C << 16) | 0x80007059u, D_001F8588, D_001F85A8, D_001C8F78);
    }
    D_001F85B8 = func_0E0DA8((D_00283C80.w_B8 << 16) | 0x800070D9u);
}
