/* LEVEL_08:0x21B5B0 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_002E7040;
extern int D_00253144;
extern unsigned int D_00253140;
extern char D_00253110[];
extern char D_00253130[];
extern char D_0021B690[];
unsigned int func_211128(unsigned int a, char *b, char *c, char *d);
unsigned int func_0EE198(unsigned int a);

void func_21B5B0(void)
{
    if (D_00253144 == -1) {
        D_00253144 = func_211128((D_002E7040.w_12C << 16) | 0x80007059u, D_00253110, D_00253130, D_0021B690);
    }
    D_00253140 = func_0EE198((D_002E7040.w_B8 << 16) | 0x800070D9u);
}
