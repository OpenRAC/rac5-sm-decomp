/* LEVEL_22:0x13E668 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_001ED980;
extern int D_00166F2C;
extern unsigned int D_00166F28;
extern char D_00166EF8[];
extern char D_00166F18[];
extern char D_0013E748[];
unsigned int func_13CC28(unsigned int a, char *b, char *c, char *d);
unsigned int func_0CED38(unsigned int a);

void func_13E668(void)
{
    if (D_00166F2C == -1) {
        D_00166F2C = func_13CC28((D_001ED980.w_12C << 16) | 0x80007059u, D_00166EF8, D_00166F18, D_0013E748);
    }
    D_00166F28 = func_0CED38((D_001ED980.w_B8 << 16) | 0x800070D9u);
}
