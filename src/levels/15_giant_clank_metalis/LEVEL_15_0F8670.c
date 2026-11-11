/* LEVEL_15:0x0F8670 -- calls six table entries in order through their function pointers. */
typedef void (*Fn6)(void);

struct Ent6 {
    Fn6 fn;
    int b[4];
};

struct Tab6 {
    int hdr;
    struct Ent6 ents[16];
};

extern struct Tab6 D_0016F480;

void func_0F8670(void)
{
    struct Tab6 *t;
    struct Ent6 *p;
    int n;

    t = &D_0016F480;
    p = &t->ents[0];
    n = 5;
    do {
        n--;
        p->fn();
        p++;
    } while (n >= 0);
}
