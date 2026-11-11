/* LEVEL_18:0x156B28 -- checks a linked record and, when its tag matches, calls two helpers and records one byte. */
struct V156B28 {
    char pad0[0xFC];
    int fFC;
};

struct S156B28 {
    struct V156B28 *f00;
    char pad04[0x2D - 4];
    unsigned char b2D;
};

struct U156B28 {
    struct P156B28 *f00;
    unsigned char b04;
};

struct P156B28 {
    char pad0[0x54];
    struct U156B28 *f54;
    struct S156B28 *f58;
};

extern int func_159768(void *a, void *b, unsigned char *c);
extern void func_156620(void *p, int x);

void func_156B28(struct P156B28 *p)
{
    struct S156B28 *s;
    struct U156B28 *u;
    unsigned char c;

    s = p->f58;
    u = p->f54;
    if (s->f00 != 0) {
        if (s->f00->fFC == u->b04) {
            if (func_159768(u->f00, p, &c) != 0) {
                s->b2D = c;
                func_156620(p, 1);
            }
        }
    }
}
