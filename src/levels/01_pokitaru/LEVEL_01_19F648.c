/* LEVEL_01:0x19F648 -- copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_00208A30;
extern unsigned int D_00208A8C;
extern unsigned int D_00208A90;
extern struct Src19F648 D_00297DC0;
extern int func_06E420(unsigned int word);
void func_19F648(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_00297DC0;
    b = s->w_34;
    a = s->w_1D0;
    c = D_00208A8C;
    d = D_00208A90;
    D_00208A8C = (c & 0xF800FFFF) | (b << 16);
    D_00208A90 = (d & 0xF800FFFF) | (a << 16);
    r = func_06E420(D_00208A8C);
    D_00208A30 = r;
}
