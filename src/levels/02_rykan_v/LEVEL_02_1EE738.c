/* LEVEL_02:0x1EE738 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_002AF2C0;
extern int D_0021E594;
extern unsigned int D_0021E590;
extern char D_0021E560[];
extern char D_0021E580[];
extern char D_001EE818[];
unsigned int func_1E62D0(unsigned int a, char *b, char *c, char *d);
unsigned int func_0E9B58(unsigned int a);

void func_1EE738(void)
{
    if (D_0021E594 == -1) {
        D_0021E594 = func_1E62D0((D_002AF2C0.w_12C << 16) | 0x80007059u, D_0021E560, D_0021E580, D_001EE818);
    }
    D_0021E590 = func_0E9B58((D_002AF2C0.w_B8 << 16) | 0x800070D9u);
}
