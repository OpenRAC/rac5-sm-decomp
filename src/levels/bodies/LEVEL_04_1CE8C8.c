/* LEVEL_04:0x1CE8C8 -- placement copy of LEVEL_01_1BBA08.c: returns 1 when the first lookup fails, otherwise the negated follow-up result. */

struct Sub1BBA08 {
    char pad00[0x34];
    void *p34;
};

struct Ent1BBA08 {
    char pad00[0x54];
    struct Sub1BBA08 *p54;
};

extern void func_019F78(void *p);
extern int func_087C38(void *a, void *b);
extern int func_1CE130(struct Ent1BBA08 *e);

int func_1CE8C8(struct Ent1BBA08 *e)
{
    struct Sub1BBA08 *s;
    unsigned char buf[16];

    s = e->p54;
    func_019F78(buf);
    if (func_087C38(s->p34, buf) == 0) {
        return 1;
    }
    return func_1CE130(e) == 0;
}
