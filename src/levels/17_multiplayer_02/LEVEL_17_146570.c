/* LEVEL_17:0x146570 -- placement copy of LEVEL_16_14D498.c: per-frame update of the twelve timed beam slots of an owner: counts each slot down and moves it through its states (arm, spawn the link record, flash, release the target and call its release handler). */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    int bit;
    int y;
    int z;
} ThreeWords;

typedef struct {
    char pad_00[0x40];
    unsigned short cnt_40;
} Tmpl;

typedef struct {
    char pad_00[0x10];
    V3 dir_10;
    char pad_1C[0x14];
    V3 pos_30;
    char pad_3C[4];
    Tmpl *tmpl_40;
    char pad_44;
    unsigned char b_45;
    unsigned char b_46;
    char pad_47[0x1D];
    int flags_64;
} Ent;

typedef struct Link Link;
typedef struct O O;

typedef struct {
    Ent *ent_00;
    float t_04;
    int state_08;
    Link *link_0C;
    void (*fn_10)(Ent *);
} Beam;

typedef struct {
    char pad_00[0x180];
    Beam beams_180[12];
} State;

typedef struct Obj {
    char pad_00[0x58];
    State *st_58;
} Obj;

typedef struct {
    char pad0[0x14];
    unsigned char on;
} Y;

typedef struct {
    char pad0[0x30];
    V3 pos;
} Z;

typedef struct {
    char pad_00[8];
    float t_08;
} Timer;

extern Timer D_001B0F80;
extern Y D_001B0FA0;
extern char D_001C01C8[];

extern Link *func_146860(Obj *obj);
extern void func_066E48(O *o, Y *y, V3 *p, V3 *q, Z *z);
extern void func_067050(void *context, void *object, int mode, const ThreeWords *first, const ThreeWords *second);
extern void func_1468A8(struct Obj *o, char *target);

static __inline__ void AddScaled(V3 *d, V3 *a, V3 *dir, float k)
{
    d->x = a->x + dir->x * k;
    d->y = a->y + dir->y * k;
    d->z = a->z + dir->z * k;
}

void func_146570(float dt, Obj *o)
{
    unsigned int i;
    State *st;
    Beam *b;
    Ent *e;
    Ent *e2;
    float f;
    int bit;
    Tmpl *tm;
    V3 v;

    st = o->st_58;
    i = 0;
    do {
        b = &st->beams_180[i];
        switch (b->state_08) {
        case 1:
            f = b->t_04;
            b->t_04 = f - dt;
            if (f - dt <= 0.0f) {
                AddScaled(&v, &b->ent_00->pos_30, &b->ent_00->dir_10, 4.0f);
                b->link_0C = func_146860(o);
                if (b->link_0C != 0) {
                    func_066E48((O *)b->link_0C, &D_001B0FA0, &v, (V3 *)b->ent_00, (Z *)b->ent_00);
                }
                b->state_08 = 3;
                b->t_04 = 1.0f;
            }
            break;
        case 3:
            f = b->t_04;
            b->t_04 = f - dt;
            if (f - dt <= 0.0f) {
                b->state_08 = 2;
                b->t_04 = D_001B0F80.t_08;
                AddScaled(&v, &b->ent_00->pos_30, &b->ent_00->dir_10, 10.0f);
                func_067050(&D_001B0F80, b->ent_00, 1, (const ThreeWords *)D_001C01C8, (const ThreeWords *)&v);
            }
            break;
        case 2:
            f = b->t_04;
            b->t_04 = f - dt;
            if (f - dt <= 0.0f) {
                b->state_08 = 4;
            }
            break;
        case 4:
            b->ent_00->flags_64 = b->ent_00->flags_64 & ~0x20;
            b->ent_00->flags_64 = b->ent_00->flags_64 & ~8;
            e = b->ent_00;
            bit = e->flags_64 & 1;
            if (bit != 1) {
                tm = e->tmpl_40;
                if (tm != 0) {
                    tm->cnt_40 = tm->cnt_40 + 1;
                }
            }
            e->flags_64 = e->flags_64 | 1;
            e2 = b->ent_00;
            e2->b_46 = 0;
            e2->b_45 = 0;
            b->fn_10(b->ent_00);
            b->state_08 = 0;
            b->t_04 = 0.0f;
            func_1468A8(o, (char *)b->link_0C);
            b->link_0C = 0;
            break;
        }
        i++;
    } while (i < 12);
}
