/* LEVEL_24:0x172CB0 -- finds a tagged record, spawns an object and stores a value. */
struct Rec { char pad[0x24]; int magic; char pad2[0x1C]; };
struct L {
    char pad[0x34];
    struct Rec *arr;
    unsigned n;
};
extern struct L *D_001D7A10;
extern int *func_076C50(void *e, int a, int b, int c);
extern void func_0248F0(int *p, int v);

static inline struct Rec *find(int magic)
{
    unsigned i;

    for (i = 0; i < D_001D7A10->n; i++) {
        if (D_001D7A10->arr[i].magic == magic) {
            return &D_001D7A10->arr[i];
        }
    }
    return 0;
}

int *func_172CB0(int unused, int val)
{
    struct Rec *e;
    int *o;
    int *d;

    e = find(0x50C95904);
    if (e == 0) {
        o = 0;
    } else {
        o = func_076C50(e, 0, 0, 0xFF);
    }
    if (o == 0) {
        return 0;
    }
    d = (int *)o[0x58 / 4];
    func_0248F0(d, 6);
    *d = val;
    return o;
}
