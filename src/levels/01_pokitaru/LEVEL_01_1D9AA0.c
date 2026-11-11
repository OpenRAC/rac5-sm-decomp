/* LEVEL_01:0x1D9AA0 -- seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_00297DC0;
extern int D_00209644;
extern unsigned int D_00209640;
extern char D_00209610[];
extern char D_00209630[];
extern char D_001D9B80[];
unsigned int func_1D1638(unsigned int a, char *b, char *c, char *d);
unsigned int func_0E31C8(unsigned int a);

void func_1D9AA0(void)
{
    if (D_00209644 == -1) {
        D_00209644 = func_1D1638((D_00297DC0.w_12C << 16) | 0x80007059u, D_00209610, D_00209630, D_001D9B80);
    }
    D_00209640 = func_0E31C8((D_00297DC0.w_B8 << 16) | 0x800070D9u);
}
