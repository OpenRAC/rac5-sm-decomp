/* LEVEL_19:0x153CD0 -- spawn handler of a pickup: installs its update hook, scales the global timer, settles it on the ground (or marks it airborne), binds its owner link and registers its bounding box in the pool. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad_00[0xC];
    int w_0C;
    int w_10;
    int w_14;
    char pad_18[0x1C];
} E;

typedef struct {
    char pad_00[4];
    E *tab_04;
    char pad_08[0x37];
    unsigned char b_3F;
} D;

typedef struct {
    char pad_00[0x30];
    V3 pos_30;
    char pad_3C[4];
    D *d_40;
    unsigned char idx_44;
    char pad_45[0x1F];
    unsigned int flags_64;
} C;

typedef struct {
    char pad_00[3];
    unsigned char b_03;
    C *c_04;
    V3 v_08;
    V3 v_14;
    unsigned char b_20;
    char pad_21;
    unsigned short h_22;
    char pad_24[0x1C];
    int w_40;
    char pad_44[0xC];
    unsigned char r_50;
    unsigned char b_51;
} A;

typedef struct {
    char pad_00[0x10];
    int w_10;
    char pad_14[0x15];
    unsigned char b_29;
    char pad_2A[6];
    void *w_30;
    unsigned char b_34;
    char pad_35[3];
    int w_38;
} St;

typedef struct {
    char pad_00[0xDC];
    void *hook_DC;
} Ext;

typedef struct {
    char pad_00[0x30];
    V3 pos_30;
    char pad_3C[0xC];
    Ext *ext_48;
    char pad_4C[8];
    St *st_54;
    A *a_58;
    char pad_5C[8];
    unsigned int flags_64;
} O;

typedef struct {
    char pad_00[0x68];
} T;

extern char D_00153CC0[];
extern char D_00155E68[];
extern char D_00156668[];
extern float D_001BEF80[1];
extern T D_001DE578[];
extern float func_024500(void);
extern int func_02D588(St *st, O *o);
extern int func_0138D0(V3 *pos, float *out, int a2, float f);
extern void func_155D60(O *o);
extern unsigned char func_1452E0(void *w, O *o, St *st, char *tab0, char *tab1, float f0, float f1);
extern void func_086308(T *t, A *a, V3 *lo, V3 *hi, unsigned int flags);

static __inline__ void vadd(V3 *d, V3 *s, V3 *t)
{
    d->x = s->x + t->x;
    d->y = s->y + t->y;
    d->z = s->z + t->z;
}

int func_153CD0(O *o)
{
    St *st;
    A *a;
    C *c;
    E *e;
    V3 p;
    V3 q;
    unsigned int fl;
    unsigned int base;
    unsigned int alt;
    unsigned char k;
    float t;

    o->ext_48->hook_DC = D_00155E68;
    o->flags_64 |= 0x1000;
    t = func_024500();
    D_001BEF80[0] = t * 0.3333333432674408f;
    a = o->a_58;
    st = o->st_54;
    a->w_40 = 0;
    a->b_51 = 0;
    if (func_02D588(st, o) != 1) {
        return 0;
    }
    if (st->b_34 == 0) {
        if (func_0138D0(&o->pos_30, 0, 1, 1.0f) == 0) {
            return 0;
        }
    } else {
        st->b_29 = 3;
    }
    if (st->w_38 == 0) {
        st->w_38 = st->w_10;
    }
    func_155D60(o);
    a->r_50 = func_1452E0(st->w_30, o, st, D_00153CC0, D_00156668, 0.699999988079071f, 0.699999988079071f);
    c = a->c_04;
    vadd(&p, &a->v_08, &c->pos_30);
    vadd(&q, &a->v_14, &c->pos_30);
    e = &c->d_40->tab_04[c->idx_44];
    base = c->flags_64 & 0x1420;
    alt = base | 1;
    fl = base | 0x81;
    if (e->w_0C == 0) {
        fl = alt;
    }
    if (e->w_10 != 0) {
        fl |= 0x100;
    }
    if (e->w_14 != 0) {
        fl |= 0x200;
    }
    if (c->d_40->b_3F == 1) {
        fl |= 0x800;
    }
    if ((c->flags_64 >> 3) & 1) {
        fl |= 0x400;
    }
    k = a->b_20;
    a->b_03 = k;
    func_086308(&D_001DE578[k], a, &p, &q, fl | a->h_22);
    return 1;
}
