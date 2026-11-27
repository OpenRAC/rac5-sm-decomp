/* LEVEL_04:0x1AB1F8 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_00222140;
extern unsigned int D_0022219C;
extern unsigned int D_002221A0;
extern struct Src19F648 D_002B25C0;
extern int func_070000(unsigned int word);
void func_1AB1F8(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_002B25C0;
    b = s->w_34;
    a = s->w_1D0;
    c = D_0022219C;
    d = D_002221A0;
    D_0022219C = (c & 0xF800FFFF) | (b << 16);
    D_002221A0 = (d & 0xF800FFFF) | (a << 16);
    r = func_070000(D_0022219C);
    D_00222140 = r;
}
