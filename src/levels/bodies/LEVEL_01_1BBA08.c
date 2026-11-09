/* LEVEL_01:0x1BBA08 -- returns 1 when the first lookup fails, otherwise the negated follow-up result. */

struct Sub1BBA08 {
    char pad00[0x34];
    void *p34;
};

struct Ent1BBA08 {
    char pad00[0x54];
    struct Sub1BBA08 *p54;
};

extern void func_01A2A0(void *p);
extern int func_084708(void *a, void *b);
extern int func_1BB270(struct Ent1BBA08 *e);

int func_1BBA08(struct Ent1BBA08 *e)
{
    struct Sub1BBA08 *s;
    unsigned char buf[16];

    s = e->p54;
    func_01A2A0(buf);
    if (func_084708(s->p34, buf) == 0) {
        return 1;
    }
    return func_1BB270(e) == 0;
}
