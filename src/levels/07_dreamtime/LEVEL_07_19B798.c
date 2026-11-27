/* LEVEL_07:0x19B798 -- finds a tagged entry in a global table, creates an object for it, links the owner and applies global data. */
typedef struct {
    char pad0[0x24];
    int tag;
    char pad28[0x1C];
} Entry;
typedef struct {
    char pad0[0x34];
    Entry *arr;
    unsigned int cnt;
} Tab;
typedef struct {
    char pad0[0x58];
    int *link;
} New;
typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} G;
extern Tab *D_0021B090;
extern G *D_0021D064;
extern char D_0022CAC0[];
extern New *func_07E6D8(Entry *e, int a, char *b, int c);
extern void func_086728(int x);
extern void func_082B38(New *n, G *g, float a, float b, float c, float d, int e, int f, int g2, int h, int i, int j);

static inline Entry *FindEntry(Tab *t, int tag)
{
    unsigned i;
    for (i = 0; i < t->cnt; i++) {
        if (t->arr[i].tag == tag)
            return &t->arr[i];
    }
    return 0;
}

static inline New *Spawn(unsigned int tag, char *b)
{
    Entry *e = FindEntry(D_0021B090, tag);

    if (e == 0)
        return 0;
    return func_07E6D8(e, 0, b, 0xFF);
}

void func_19B798(int x)
{
    New *n;

    n = Spawn(0x08785085, D_0022CAC0);
    *n->link = x;
    func_086728(x);
    if (D_0021D064 != 0)
        func_082B38(n, D_0021D064, D_0021D064->f14, D_0021D064->f18, D_0021D064->f1C, D_0021D064->f20, 0, 0, 0, 0, 0, 1);
}
