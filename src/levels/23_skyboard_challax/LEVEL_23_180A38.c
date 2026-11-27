/* LEVEL_23:0x180A38 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_001DBE68;
extern unsigned int D_001DBEC4;
extern unsigned int D_001DBEC8;
extern struct Src19F648 D_00269200;
extern int func_067BC8(unsigned int word);
void func_180A38(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_00269200;
    b = s->w_34;
    a = s->w_1D0;
    c = D_001DBEC4;
    d = D_001DBEC8;
    D_001DBEC4 = (c & 0xF800FFFF) | (b << 16);
    D_001DBEC8 = (d & 0xF800FFFF) | (a << 16);
    r = func_067BC8(D_001DBEC4);
    D_001DBE68 = r;
}
