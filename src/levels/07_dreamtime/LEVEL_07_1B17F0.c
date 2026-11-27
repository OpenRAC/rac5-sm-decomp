/* LEVEL_07:0x1B17F0 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_0021D648;
extern unsigned int D_0021D6A4;
extern unsigned int D_0021D6A8;
extern struct Src19F648 D_002AD6C0;
extern int func_06F2A0(unsigned int word);
void func_1B17F0(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_002AD6C0;
    b = s->w_34;
    a = s->w_1D0;
    c = D_0021D6A4;
    d = D_0021D6A8;
    D_0021D6A4 = (c & 0xF800FFFF) | (b << 16);
    D_0021D6A8 = (d & 0xF800FFFF) | (a << 16);
    r = func_06F2A0(D_0021D6A4);
    D_0021D648 = r;
}
