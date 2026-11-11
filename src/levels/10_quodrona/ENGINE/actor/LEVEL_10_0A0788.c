/* LEVEL_10:0x0A0788 -- placement copy of LEVEL_01_09F6A8.c: allocates an entry table and its buffer, links each entry to a slice, then initializes. */
extern void *func_10D9B8(int size, int a, const char *file, int line);
extern void func_0A0860(void);
extern char D_00219AE8[];
struct Ent {
    char pad[0xC];
    char *buf;
    char pad10[0xC];
};
struct G {
    char flag;
    char pad1[7];
    struct Ent *ents;
    int count;
    int per;
    char *buf;
    int total;
};
extern struct G D_002A5A50;

void func_0A0788(void)
{
    struct G *g = &D_002A5A50;
    int n = g->count;
    int m = g->per;
    if (n > 0 && m > 0) {
        struct Ent *p;
        struct Ent *end;
        char *b;
        int size = n * 0x1C;
        g->flag = 1;
        g->ents = func_10D9B8(size, 0, D_00219AE8, 0x37);
        g->total = m * n;
        g->buf = func_10D9B8(m * n, 0, D_00219AE8, 0x39);
        b = g->buf;
        p = g->ents;
        end = (struct Ent *)((char *)p + size);
        while (p != end) {
            p->buf = b;
            p++;
            b += m;
        }
        func_0A0860();
    }
}
