/* LEVEL_10:0x02C980 -- placement copy of LEVEL_01_02CAF8.c: binds a menu slot to a record found by id, loads its model matrices and returns 1 when the slot is usable. */
typedef struct Obj Obj;

typedef struct {
    int w0;
    Obj *w4;
    char pad8[0x1C];
    int key;
    char pad28[0x1C];
} Rec;

typedef struct {
    char pad0[0x34];
    Rec *recs;
    unsigned int count;
} Tbl;

typedef struct {
    int w0;
    char pad4[0x44];
    int w48;
} Ent;

struct Obj {
    int w0;
    int w4;
    int *w8;
};

typedef struct {
    char pad0[0x40];
    char mat40[0x34];
    char pad74[0x28];
    int w9C;
    char pad_A0[4];
    char subA4[4];
    Obj *wA8;
    char matAC[0x28];
    char matD4[0x28];
    char padFC[4];
    int w100;
    int w104;
} Menu;

extern Tbl *D_0020F9F0;

extern Ent *func_024038(int a, int b, int c);
extern void func_023038(void *p, int a, int b, int c);
extern int func_089EF8(int *a, unsigned int b, int c, void *d);
extern int func_089F80(int a, void *d);
extern void func_089300(void *p);
extern void func_088E88(float f, void *a, void *b);

static __inline__ Rec *Find(int key)
{
    unsigned int i;

    for (i = 0; i < D_0020F9F0->count; i++) {
        if (D_0020F9F0->recs[i].key == key) {
            return &D_0020F9F0->recs[i];
        }
    }
    return 0;
}

int func_02C980(Menu *m, int a, int idx)
{
    Ent *e;
    Rec *rec;

    m->w100 = a;
    m->w104 = a - 2;
    e = func_024038(a, idx, -1);
    if (e == 0) {
        return 0;
    }
    if (e->w48 != 0) {
        rec = Find(e->w48);
    } else {
        rec = Find(e->w0);
    }
    if (rec != 0) {
        m->wA8 = rec->w4;
    }
    if (m->wA8 == 0) {
        return 0;
    }
    m->w9C = 0;
    func_023038(m->subA4, m->w100, -1, -1);
    func_089EF8(m->wA8->w8, -1, m->wA8->w4 + 0x20, m->matAC);
    func_089F80(*m->wA8->w8 + m->w9C * 0x40, m->matAC);
    func_089EF8(m->wA8->w8, -1, m->wA8->w4 + 0x20, m->matD4);
    func_089F80(*m->wA8->w8 + m->w9C * 0x40, m->matD4);
    func_089300(m->mat40);
    func_088E88(0.0f, m->mat40, m->matAC);
    return 1;
}
