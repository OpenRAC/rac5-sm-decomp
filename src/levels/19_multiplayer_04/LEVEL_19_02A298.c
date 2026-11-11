/* LEVEL_19:0x02A298 -- placement copy of LEVEL_01_02CAF8.c: binds a menu slot to a record found by id, loads its model matrices and returns 1 when the slot is usable. */
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

extern Tbl *D_001B5A20;

extern Ent *func_021DB0(int a, int b, int c);
extern void func_020E28(void *p, int a, int b, int c);
extern int func_07B5E8(int *a, unsigned int b, int c, void *d);
extern int func_07B670(int a, void *d);
extern void func_07A9F0(void *p);
extern void func_07A5E0(float f, void *a, void *b);

static __inline__ Rec *Find(int key)
{
    unsigned int i;

    for (i = 0; i < D_001B5A20->count; i++) {
        if (D_001B5A20->recs[i].key == key) {
            return &D_001B5A20->recs[i];
        }
    }
    return 0;
}

int func_02A298(Menu *m, int a, int idx)
{
    Ent *e;
    Rec *rec;

    m->w100 = a;
    m->w104 = a - 2;
    e = func_021DB0(a, idx, -1);
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
    func_020E28(m->subA4, m->w100, -1, -1);
    func_07B5E8(m->wA8->w8, -1, m->wA8->w4 + 0x20, m->matAC);
    func_07B670(*m->wA8->w8 + m->w9C * 0x40, m->matAC);
    func_07B5E8(m->wA8->w8, -1, m->wA8->w4 + 0x20, m->matD4);
    func_07B670(*m->wA8->w8 + m->w9C * 0x40, m->matD4);
    func_07A9F0(m->mat40);
    func_07A5E0(0.0f, m->mat40, m->matAC);
    return 1;
}
