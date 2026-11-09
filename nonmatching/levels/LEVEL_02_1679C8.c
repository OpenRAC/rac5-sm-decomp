/* LEVEL_02.REL:0x1679C8: reviewed 172-byte candidate, held for ABI review.
 * Flags a slot, advances its counter and queues it when the counter reaches
 * the limit.
 * pinned C with gnu-ee-trial links 172/172 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, int, int), but the
 * accepted caller LEVEL_02_1D4908.c declares it returning void with (int, int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    void *p0;
    char pad0[0x10];
    unsigned char b14;
    unsigned char b15;
    unsigned char b16;
} Entry;

typedef struct {
    char pad0[0xC0];
    void *pC0;
    char padC4[0x8];
    unsigned char counters[0x20];
} Sub;

typedef struct {
    char pad0[0x54];
    Sub *sub54;
} Obj;

void func_1D95D0(void *a, void *b, int c);
void func_168A00(Sub *s, int j);

void func_1679C8(Obj *a, int i, int j)
{
    Sub *s;
    Entry *e;
    unsigned char *cnt;
    unsigned char *c;

    i = (unsigned char)i;
    j = (unsigned char)j;
    s = a->sub54;
    e = (Entry *)((char *)s + i * 0x18);
    cnt = s->counters;
    e->b14 = e->b14 | 2;
    e->b16 = (unsigned char)j;
    c = cnt + j;
    *c = *c + 1;
    func_1D95D0(s->pC0, e->p0, j);
    if (!(s->counters[0x10] < *c)) {
        e->b14 = e->b14 | 4;
        func_168A00(s, j);
    }
}
