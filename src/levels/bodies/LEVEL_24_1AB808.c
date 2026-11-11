/* LEVEL_24:0x1AB808 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_00263C80;
extern int D_001DA4AC;
extern unsigned int D_001DA4A8;
extern char D_001DA478[];
extern char D_001DA498[];
extern char D_001AB8E8[];
unsigned int func_1A1B38(unsigned int a, char *b, char *c, char *d);
unsigned int func_0DA688(unsigned int a);

void func_1AB808(void)
{
    if (D_001DA4AC == -1) {
        D_001DA4AC = func_1A1B38((D_00263C80.w_12C << 16) | 0x80007059u, D_001DA478, D_001DA498, D_001AB8E8);
    }
    D_001DA4A8 = func_0DA688((D_00263C80.w_B8 << 16) | 0x800070D9u);
}
