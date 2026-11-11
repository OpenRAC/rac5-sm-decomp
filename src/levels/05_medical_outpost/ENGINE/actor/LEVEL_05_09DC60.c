/* LEVEL_05:0x09DC60 -- placement copy of LEVEL_01_09F6A8.c: allocates an entry table and its buffer, links each entry to a slice, then initializes. */
extern void *func_10BBE0(int size, int a, const char *file, int line);
extern void func_09DD38(void);
extern char D_001FFA68[];
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
extern struct G D_00288510;

void func_09DC60(void)
{
    struct G *g = &D_00288510;
    int n = g->count;
    int m = g->per;
    if (n > 0 && m > 0) {
        struct Ent *p;
        struct Ent *end;
        char *b;
        int size = n * 0x1C;
        g->flag = 1;
        g->ents = func_10BBE0(size, 0, D_001FFA68, 0x37);
        g->total = m * n;
        g->buf = func_10BBE0(m * n, 0, D_001FFA68, 0x39);
        b = g->buf;
        p = g->ents;
        end = (struct Ent *)((char *)p + size);
        while (p != end) {
            p->buf = b;
            p++;
            b += m;
        }
        func_09DD38();
    }
}
