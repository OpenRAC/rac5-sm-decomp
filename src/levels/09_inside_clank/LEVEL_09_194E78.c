/* LEVEL_09:0x194E78 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_001F2888;
extern unsigned int D_001F28E4;
extern unsigned int D_001F28E8;
extern struct Src19F648 D_0027F540;
extern int func_06B020(unsigned int word);
void func_194E78(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_0027F540;
    b = s->w_34;
    a = s->w_1D0;
    c = D_001F28E4;
    d = D_001F28E8;
    D_001F28E4 = (c & 0xF800FFFF) | (b << 16);
    D_001F28E8 = (d & 0xF800FFFF) | (a << 16);
    r = func_06B020(D_001F28E4);
    D_001F2888 = r;
}
