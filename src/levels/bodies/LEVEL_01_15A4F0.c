/* LEVEL_01:0x15A4F0 -- starts a helper with a zero float, stores a result and a flag in the owner, then calls a final helper. */

struct P54_15A4F0 {
    char pad00[0x3C];
    int f3C;
};

struct S58_15A4F0 {
    char pad00[0x60];
    int f60;
    char pad64[0x7D - 0x64];
    unsigned char b7D;
    char pad7E[0x81 - 0x7E];
    char sub81[4];
};

struct This15A4F0 {
    char pad00[0x54];
    struct P54_15A4F0 *p54;
    struct S58_15A4F0 *p58;
};

extern void func_07CB58(struct This15A4F0 *t, int a, float f);
extern int func_15D3A0(void);
extern void func_031320(struct P54_15A4F0 *a, struct This15A4F0 *b, int c, char *d);

void func_15A4F0(struct This15A4F0 *t)
{
    struct P54_15A4F0 *s2;
    struct S58_15A4F0 *s1;

    s2 = t->p54;
    s1 = t->p58;
    func_07CB58(t, 6, 0.0f);
    s1->f60 = func_15D3A0();
    s1->b7D = 1;
    func_031320(s2, t, s2->f3C, s1->sub81);
}
