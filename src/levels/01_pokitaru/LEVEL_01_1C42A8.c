/* LEVEL_01:0x1C42A8 -- finds a tagged record, spawns an object from it and sets it up from the given parameter block. */
struct Rec { char pad[0x24]; unsigned int magic; char pad2[0x1C]; };
struct L {
    char pad[0x34];
    struct Rec *arr;
    unsigned n;
};
typedef struct {
    char pad[0x58];
    void *w58;
} Obj;

extern struct L *D_00206D90;
extern int D_00229748;
extern char D_00229738[];
extern char D_00229788[];
extern int D_002297A0;
extern Obj *func_07C558(void *e, int a, int b, int c);
extern void func_125D40(void *out, void *p, char *q);
extern float func_07CEB0(void *p, Obj *o, int v);
extern void func_125128(Obj *a, Obj *b, void *p);
extern void func_1CFC20(Obj *o, void *w58, char *tab, void *buf, int m);

static inline struct Rec *find(unsigned int magic)
{
    unsigned i;

    for (i = 0; i < D_00206D90->n; i++) {
        if (D_00206D90->arr[i].magic == magic) {
            return &D_00206D90->arr[i];
        }
    }
    return 0;
}

void func_1C42A8(void *p)
{
    struct Rec *e;
    Obj *o;
    char buf[0x10];
    int k;

    k = D_00229748;
    e = find(0x1B1C48CE);
    if (e == 0) {
        o = 0;
    } else {
        o = func_07C558(e, k, 0, 0xFF);
    }
    if (o != 0) {
        func_125D40(buf, p, D_00229738);
        func_07CEB0(p, o, D_002297A0);
        func_125128(o, o, p);
        func_1CFC20(o, o->w58, D_00229788, buf, -1);
    }
}
