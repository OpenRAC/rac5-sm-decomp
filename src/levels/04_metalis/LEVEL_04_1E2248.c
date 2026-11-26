/* LEVEL_04:0x1E2248 -- shock pulse: drops the link when the target is gone or dying, otherwise once the source is armed fires at every other group member inside the radius, spawning the hit and its spark effect. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad_00[0x24];
    int w_24;
} Cls;

typedef struct {
    char pad_00[0x30];
    Vec4 pos_30;
    Cls *cls_40;
    char pad_44[2];
    unsigned char state_46;
    char pad_47[0x1D];
    unsigned int flags_64;
} Obj;

typedef struct {
    Obj *mob_00;
    int w_04;
} Entry;

typedef struct {
    Entry ents_00[8];
    char pad_40[4];
    unsigned char count_44;
} List;

typedef struct {
    char pad_00[0x58];
    List *list_58;
} Grp;

typedef struct {
    char pad_00[4];
    float f_04;
    float f_08;
} Prm;

typedef struct {
    char pad_00[0x7C];
    Obj *tgt_7C;
    Entry *ent_80;
} Ctl;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Fx;

typedef struct {
    Fx *fx_00;
    char pad_04[0x10];
    int snd_14;
} Shock;

typedef struct Rec Rec;

extern Shock D_003B3DF0;
extern int D_00244540[][6];

extern void func_1E2A60(void *o, char *m, char *pos, void *p);
extern Rec *func_197438(float a, float b, Obj *o, Obj **owner, int c, int *q, int d);
extern void func_083E30(void *obj, Fx *fx, int a, int b, int c, int d, int e, int f, float f0, float f1, float f2, float f3);

void func_1E2248(Ctl *o, Obj *m, Grp *g, Prm *p, int kind)
{
    Vec4 *pos;
    Entry *ent;
    Obj *t;
    Rec *r;
    Fx *fx;
    float dx;
    float dz;
    int snd;
    unsigned char i;
    unsigned char n;

    if (o->tgt_7C == 0) {
        return;
    }
    if (o->tgt_7C->flags_64 & 6) {
        o->tgt_7C = 0;
        o->ent_80 = 0;
        func_1E2A60(o, (char *)m, (char *)&m->pos_30, p);
        return;
    }
    if (m->state_46 != 3) {
        return;
    }
    if (o->tgt_7C->state_46 == 0) {
        return;
    }
    m->state_46 = 4;
    pos = &o->ent_80->mob_00->pos_30;
    n = g->list_58->count_44;
    for (i = 0; i < n; i++) {
        ent = &g->list_58->ents_00[i];
        t = ent->mob_00;
        if (t == m) {
            continue;
        }
        if (ent == o->ent_80) {
            continue;
        }
        dx = pos->x - t->pos_30.x;
        dz = pos->z - t->pos_30.z;
        if (dx * dx + dz * dz <= p->f_08) {
            snd = 0;
            if (t->cls_40->w_24 == 0x472C7FA9) {
                snd = D_003B3DF0.snd_14;
            }
            r = func_197438(0.4f, p->f_04, o->ent_80->mob_00, &ent->mob_00, (int)m, D_00244540[kind], snd);
            fx = D_003B3DF0.fx_00;
            if (fx != 0) {
                func_083E30(r, fx, 0, 0, 0, 0, 0, 1, fx->f_14, fx->f_18, fx->f_1C, fx->f_20);
            }
        }
    }
}
