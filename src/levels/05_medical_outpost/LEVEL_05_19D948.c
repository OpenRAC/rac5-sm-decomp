/* LEVEL_05:0x19D948 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_001F7C20;
extern unsigned int D_001F7C7C;
extern unsigned int D_001F7C80;
extern struct Src19F648 D_00283C80;
extern int func_06C088(unsigned int word);
void func_19D948(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_00283C80;
    b = s->w_34;
    a = s->w_1D0;
    c = D_001F7C7C;
    d = D_001F7C80;
    D_001F7C7C = (c & 0xF800FFFF) | (b << 16);
    D_001F7C80 = (d & 0xF800FFFF) | (a << 16);
    r = func_06C088(D_001F7C7C);
    D_001F7C20 = r;
}
