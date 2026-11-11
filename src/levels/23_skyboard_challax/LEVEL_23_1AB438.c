/* LEVEL_23:0x1AB438 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_00269200;
extern int D_001DC8C4;
extern unsigned int D_001DC8C0;
extern char D_001DC890[];
extern char D_001DC8B0[];
extern char D_001AB518[];
unsigned int func_1A2FD0(unsigned int a, char *b, char *c, char *d);
unsigned int func_0D7B50(unsigned int a);

void func_1AB438(void)
{
    if (D_001DC8C4 == -1) {
        D_001DC8C4 = func_1A2FD0((D_00269200.w_12C << 16) | 0x80007059u, D_001DC890, D_001DC8B0, D_001AB518);
    }
    D_001DC8C0 = func_0D7B50((D_00269200.w_B8 << 16) | 0x800070D9u);
}
