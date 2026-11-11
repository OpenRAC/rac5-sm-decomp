/* LEVEL_16:0x156BD0 -- checks a helper result; on success calls two helpers with fixed floats, otherwise returns 23. */
struct B156BD0 {
    char pad0[0x6C];
    unsigned char b6C;
};

struct P156BD0 {
    char pad0[0x54];
    char *f54;
    struct B156BD0 *f58;
};

extern int func_156AC8(struct P156BD0 *p);
extern void func_02F0D0(char *a, struct P156BD0 *b, int c, int d, int e, float f, float g);
extern int func_156C48(struct P156BD0 *p);

int func_156BD0(struct P156BD0 *p)
{
    char *s2;
    struct B156BD0 *s1;

    s2 = p->f54;
    s1 = p->f58;
    if (func_156AC8(p) == 0) {
        return 0x17;
    }
    func_02F0D0(s2 + 4, p, 0, s1->b6C, 0, 0.0f, 16.0f);
    return func_156C48(p);
}
