/* LEVEL_10:0x1AC470 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_00211998;
extern unsigned int D_002119F4;
extern unsigned int D_002119F8;
extern struct Src19F648 D_002A11C0;
extern int func_06D638(unsigned int word);
void func_1AC470(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_002A11C0;
    b = s->w_34;
    a = s->w_1D0;
    c = D_002119F4;
    d = D_002119F8;
    D_002119F4 = (c & 0xF800FFFF) | (b << 16);
    D_002119F8 = (d & 0xF800FFFF) | (a << 16);
    r = func_06D638(D_002119F4);
    D_00211998 = r;
}
