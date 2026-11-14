/* LEVEL_15:0x107BB8 -- sets a height and clears a flag on a record, then calls a helper twice on sub-objects. */
struct Q107BB8 {
    char pad0[0x5C];
    float f5C;
};

struct P107BB8 {
    char pad0[0x0D];
    unsigned char b0D;
    char pad0E[0x0A];
    float f18;
    char pad1C[0x414];
    struct Q107BB8 *f430;
};

extern void func_0FE850(char *a, char *b, float c, float d);

static __inline__ void Link(char *dst, char *src, float f)
{
    func_0FE850(dst, src, 0.0f, f);
}

void func_107BB8(struct P107BB8 *p)
{
    struct Q107BB8 *q;

    q = p->f430;
    p->f18 = 150.0f;
    p->b0D = 0;
    Link((char *)p + 0x398, (char *)q + 0xA8, q->f5C);
    Link((char *)p + 0x3C8, (char *)p->f430 + 0xB4, q->f5C);
}
