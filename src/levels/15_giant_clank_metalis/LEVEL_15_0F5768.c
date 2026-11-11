/* LEVEL_15:0x0F5768 -- dispatches by type through a handler table, falling back to a hashed id search. */
struct Info {
    char pad0[0x24];
    int type;
    struct Handler *h;
};
struct Obj {
    char pad0[0x40];
    struct Info *info;
    char pad44[0x18];
    int id;
};
struct Handler {
    int key;
    int pad;
    int (*fn)(struct Obj *o);
};
extern struct Handler D_0016F368[5];
extern char D_0016F168[];
extern int func_0D4D38(unsigned int a, void *b, int c);

int func_0F5768(struct Obj *o)
{
    int i;
    int r;
    int want;
    int n;
    int type;
    struct Handler *h;

    if (!o)
        return -1;
    type = o->info->type;
    for (i = 0; i < 5; i++) {
        if (type == D_0016F368[i].key)
            break;
    }
    if (i == 5)
        return -1;
    h = &D_0016F368[i];
    r = h->fn(o);
    if (r >= 0)
        return r + 6;
    want = o->id;
    for (n = 0; n < 0x400; n++) {
        if (want == func_0D4D38(0xE217458D, D_0016F168, n))
            return n + 6;
    }
    return -1;
}
