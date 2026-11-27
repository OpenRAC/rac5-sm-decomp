/* LEVEL_08:0x1D1D00 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_002521B0;
extern unsigned int D_0025220C;
extern unsigned int D_00252210;
extern struct Src19F648 D_002E7040;
extern int func_073C68(unsigned int word);
void func_1D1D00(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_002E7040;
    b = s->w_34;
    a = s->w_1D0;
    c = D_0025220C;
    d = D_00252210;
    D_0025220C = (c & 0xF800FFFF) | (b << 16);
    D_00252210 = (d & 0xF800FFFF) | (a << 16);
    r = func_073C68(D_0025220C);
    D_002521B0 = r;
}
