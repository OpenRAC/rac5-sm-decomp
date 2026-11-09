/* LEVEL_20:0x079CE8 -- placement copy of LEVEL_01_0A0120.c: clears two 0x11C-byte pad records and activates those reporting state 6. */
struct Pad {
    unsigned char b0;
    unsigned char b1;
    char pad0[0x0a];
    int w0c;
    int w10;
    int w14;
    char pad1[0x100];
    int w118;
};
extern struct Pad D_00177A10[];
extern int scePadGetState(int, int);
extern void scePadSetActDirect(int, int, void *);

void func_079CE8(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_00177A10[i].w0c = 0;
        D_00177A10[i].w10 = 0;
        D_00177A10[i].w14 = 0;
        D_00177A10[i].w118 = 0;
        D_00177A10[i].b1 = 0;
        D_00177A10[i].b0 = 0;
        if (scePadGetState(i, 0) == 6)
            scePadSetActDirect(i, 0, &D_00177A10[i]);
    }
}
