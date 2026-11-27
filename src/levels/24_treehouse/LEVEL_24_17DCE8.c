/* LEVEL_24:0x17DCE8 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_001D9900;
extern unsigned int D_001D995C;
extern unsigned int D_001D9960;
extern struct Src19F648 D_00263C80;
extern int func_067A60(unsigned int word);
void func_17DCE8(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_00263C80;
    b = s->w_34;
    a = s->w_1D0;
    c = D_001D995C;
    d = D_001D9960;
    D_001D995C = (c & 0xF800FFFF) | (b << 16);
    D_001D9960 = (d & 0xF800FFFF) | (a << 16);
    r = func_067A60(D_001D995C);
    D_001D9900 = r;
}
