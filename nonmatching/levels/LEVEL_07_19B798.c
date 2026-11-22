/* USA LEVEL_07.REL:0x19B798, 244-byte candidate (21 November 2026).
 * Measured pinned: 20 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x24];
    int magic;
    char pad28[0x1C];
} Rec;

typedef struct {
    char pad00[0x34];
    Rec *arr;
    unsigned int n;
} Tab;

typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Tmpl;

typedef struct {
    int *slot;
} Data;

typedef struct {
    char pad00[0x58];
    int **data;
} Obj;

extern Tab *D_0021B090;
extern Tmpl *D_0021D064;
extern char D_0022CAC0[];
extern Obj *func_07E6D8(Rec *e, int a, char *b, int c);
extern void func_086728(void *o);
extern void func_082B38(Obj *o, Tmpl *t, int a, int b, int c, int d, int e, int f, float f0, float f1,
                        float f2, float f3);

static __inline__ Rec *Find(Tab *t, int magic)
{
    unsigned int i;

    for (i = 0; i < t->n; i++) {
        if (t->arr[i].magic == magic)
            return &t->arr[i];
    }
    return 0;
}

void func_19B798(void *arg)
{
    Rec *e;
    Obj *o;
    Tmpl *t;
    char *p;

    p = D_0022CAC0;
    e = Find(D_0021B090, 0x08785085);
    if (e == 0)
        o = 0;
    else
        o = func_07E6D8(e, 0, p, 0xFF);
    *o->data = (int *)arg;
    func_086728(arg);
    t = D_0021D064;
    if (t != 0)
        func_082B38(o, t, 0, 0, 0, 0, 0, 1, t->f14, t->f18, t->f1C, t->f20);
}
