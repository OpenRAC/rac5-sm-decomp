/* LEVEL_16:0x1747C0 -- placement copy of LEVEL_01_1AB6E0.c: when the owner has a given type id, spawns one record per position, cycling through a short table of values. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

struct Ent;

typedef struct {
    struct Ent *e_00;
    char pad_04[0x14];
    int f_18;
} Pr;

typedef struct Ent {
    char pad_00[0xF8];
    int f_F8;
} Ent;

typedef struct {
    char pad_00[0x3C];
    unsigned short h_3C;
} Rec;

typedef struct {
    char pad_00[0x58];
    Pr *p_58;
} Res;

typedef struct {
    char pad_00[0x24];
    unsigned int id_24;
} Tbl;

typedef struct {
    char pad_00[0x40];
    Tbl *tbl_40;
    char pad_44[0x14];
    Pr *p_58;
} Obj;

extern Rec *func_0220C8(int a, int b);
extern int func_022660(int a, int b, int c);
extern Res *func_174AC8(Ent *e, int a1, Vec3 *v, unsigned int h, unsigned int n, int r2);
extern void func_174940(Obj *o);

void func_1747C0(Obj *o, int a1, Vec3 *vecs, unsigned int *tbl, unsigned int count)
{
    Pr *p;
    Ent *e;
    Rec *r1;
    int r2;
    Res *r;
    unsigned int k;
    int found;
    unsigned int i;

    if (o->tbl_40->id_24 == 0x6800B8FD) {
        p = o->p_58;
        k = 0;
        found = 0;
        e = p->e_00;
        r1 = func_0220C8(8, e->f_F8);
        r2 = func_022660(8, 0x13, e->f_F8);
        for (i = 0; i < count; i++) {
            r = func_174AC8(e, a1, &vecs[i], r1->h_3C, tbl[k], r2);
            if (r != 0) {
                r->p_58->e_00 = e;
                found = 1;
            }
            k++;
            if (k >= 4 || tbl[k] == 0) {
                k = 0;
            }
        }
        if (found != 0) {
            func_174940(o);
        }
        p->f_18 = 0;
    }
}
