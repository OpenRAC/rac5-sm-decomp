/* LEVEL_04:0x198E70 -- bumps a byte counter, then clears a stored pointer when two checks match. */
struct N198E70 {
    char pad0[0x40];
    int f40;
};

struct S198E70 {
    char pad0[4];
    struct N198E70 *f04;
    char pad08[0x46];
    unsigned char b4E;
};

struct P198E70 {
    char pad0[0x58];
    struct S198E70 *f58;
};

extern struct N198E70 *D_0020F858;
extern void func_09A948(struct N198E70 *n);

void func_198E70(struct P198E70 *p, int a1)
{
    struct S198E70 *s;
    struct N198E70 *n;
    unsigned int b;

    s = p->f58;
    b = s->b4E + 1;
    n = s->f04;
    s->b4E = b;
    if (n != 0) {
        if (n->f40 == a1) {
            if (n == D_0020F858) {
                D_0020F858 = 0;
            } else {
                func_09A948(n);
            }
            s->f04 = 0;
        }
    }
}
