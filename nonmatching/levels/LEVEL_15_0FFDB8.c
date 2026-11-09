/* LEVEL_15.REL:0x0FFDB8: reviewed 240-byte candidate, held for ABI review.
 * Allocates and initializes the entries of a table.
 * pinned C with gnu-ee-trial links 240/240 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_0D4FE0 returning pointer with (int, int, pointer, int), but
 * the accepted LEVEL_15_0D4FE0.c defines it returning void with (pointer,
 * pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    void *ent;
    int n;
} Tbl;

typedef struct {
    char *arr;
    int count;
} List;

typedef struct {
    int pad0;
    List *list;
} Info;

typedef struct {
    int pad0;
    int f4;
    char pad8[0x10];
    Info *info;
} Src;

typedef struct {
    char pad0[0x18];
    char pad18[0xB0];
    char *ent;
    int n;
} Dst;

extern char D_0016F820[];
extern void func_029480(Dst *d, unsigned int a, unsigned int b, int c);
extern void func_029468(Dst *d);
extern void func_0294D8(void *p, int a, int b);
extern char *func_0D4FE0(int size, int a, char *file, int line);
extern void func_11D540(char *e, Dst *d, int a, int b, char *src);

void func_0FFDB8(Dst *d, Src *s, int a)
{
    int n;
    char *arr;
    int f4;
    int i;
    List *l;

    func_029480(d, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    func_029468(d);
    func_0294D8(&d->pad18, s->f4, 0xFFFF);
    f4 = s->f4;
    l = s->info->list;
    n = l->count;
    arr = l->arr;
    d->n = n;
    d->ent = func_0D4FE0(n * 0x118, 0, D_0016F820, 0x58D);
    for (i = 0; i < n; i++, arr += 0x18) {
        func_11D540(d->ent + i * 0x118, d, a, f4, arr);
    }
}
