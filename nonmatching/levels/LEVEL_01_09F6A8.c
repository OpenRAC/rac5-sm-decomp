/* LEVEL_01.REL:0x09F6A8: reviewed 216-byte candidate, held for ABI review.
 * Allocates an entry table and its buffer, links each entry to a slice, then
 * initializes.
 * pinned C with gnu-ee-trial links 216/216 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_10F7A0 returning pointer with (int, int, pointer, int), but
 * the accepted LEVEL_01_10F7A0.c defines it returning void with (pointer,
 * pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void *func_10F7A0(int size, int a, const char *file, int line);
extern void func_09F780(void);
extern char D_00210B68[];
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
extern struct G D_0029C650;

void func_09F6A8(void)
{
    struct G *g = &D_0029C650;
    int n = g->count;
    int m = g->per;
    if (n > 0 && m > 0) {
        struct Ent *p;
        struct Ent *end;
        char *b;
        int size = n * 0x1C;
        g->flag = 1;
        g->ents = func_10F7A0(size, 0, D_00210B68, 0x37);
        g->total = m * n;
        g->buf = func_10F7A0(m * n, 0, D_00210B68, 0x39);
        b = g->buf;
        p = g->ents;
        end = (struct Ent *)((char *)p + size);
        while (p != end) {
            p->buf = b;
            p++;
            b += m;
        }
        func_09F780();
    }
}
