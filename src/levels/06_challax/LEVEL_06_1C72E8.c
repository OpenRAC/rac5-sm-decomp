/* LEVEL_06:0x1C72E8 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_00284B40;
extern int D_001F84FC;
extern unsigned int D_001F84F8;
extern char D_001F84C8[];
extern char D_001F84E8[];
extern char D_001C73C8[];
unsigned int func_1BD618(unsigned int a, char *b, char *c, char *d);
unsigned int func_0DDAC8(unsigned int a);

void func_1C72E8(void)
{
    if (D_001F84FC == -1) {
        D_001F84FC = func_1BD618((D_00284B40.w_12C << 16) | 0x80007059u, D_001F84C8, D_001F84E8, D_001C73C8);
    }
    D_001F84F8 = func_0DDAC8((D_00284B40.w_B8 << 16) | 0x800070D9u);
}
