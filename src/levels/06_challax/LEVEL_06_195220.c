/* LEVEL_06:0x195220 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_001F7AE0;
extern unsigned int D_001F7B3C;
extern unsigned int D_001F7B40;
extern struct Src19F648 D_00284B40;
extern int func_06B1E0(unsigned int word);
void func_195220(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_00284B40;
    b = s->w_34;
    a = s->w_1D0;
    c = D_001F7B3C;
    d = D_001F7B40;
    D_001F7B3C = (c & 0xF800FFFF) | (b << 16);
    D_001F7B40 = (d & 0xF800FFFF) | (a << 16);
    r = func_06B1E0(D_001F7B3C);
    D_001F7AE0 = r;
}
