/* LEVEL_10:0x177470 -- finds a tagged record, spawns an object and fills its state. */
struct Rec { char pad[0x24]; unsigned magic; char pad2[0x1C]; };
struct L {
    char pad[0x34];
    struct Rec *arr;
    unsigned n;
};
extern struct L *D_0020F9F0;
extern int *func_07CB88(struct Rec *e, unsigned m, int a, int b);
extern void func_0EF270(int a, void *p);

static inline struct Rec *find(unsigned magic)
{
    unsigned i;

    for (i = 0; i < D_0020F9F0->n; i++) {
        if (D_0020F9F0->arr[i].magic == magic) {
            return &D_0020F9F0->arr[i];
        }
    }
    return 0;
}

int *func_177470(int p0, char *obj, int p2)
{
    struct Rec *e;
    int *o;
    int *d;

    e = find(0xD04860C4);
    if (e == 0) {
        o = 0;
    } else {
        o = func_07CB88(e, 0xD04860C4, (int)obj, 0xFF);
    }
    if (o != 0) {
        d = (int *)o[0x58 / 4];
        d[0] = p0;
        d[1] = p2;
        func_0EF270(0x19, obj + 0x30);
        d[5] = 0;
    }
    return o;
}
