/* LEVEL_17:0x14A2A0 -- placement copy of LEVEL_16_1511C8.c: while an object is visible to a player that is not its owner, makes sure the object has a tagged sound / effect handle (created through the record with the fixed tag once a counter passes 3) and plays it at the object (or at the template position) with the player's mask bit. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x24];
    unsigned int tag_24;
    char pad_28[0x1C];
} Rec;

typedef struct {
    char pad_00[0x34];
    Rec *recs_34;
    unsigned int cnt_38;
} Hdr;

typedef struct {
    char pad_00[0xF4];
    int w_F4;
    char pad_F8[4];
    int w_FC;
} Player;

typedef struct {
    char pad_00[4];
    int w_04;
    char pad_08[0x20];
    int h_28;
} Fx;

typedef struct {
    char pad_00[4];
    char *p_04;
} Tmpl;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[9];
    unsigned char kind_45;
    char pad_46[0xE];
    Tmpl *tmpl_54;
    Fx *fx_58;
} Obj;

extern Hdr *D_001A7EA0;
extern unsigned int D_001B1090;
extern char D_001B1088[];
extern char D_001C0100[];

extern Player *func_112478(unsigned int i);
extern int func_114C78(int index, int id);
extern int func_06FE68(Rec *rec, int tag, char *data, int mode);
extern void func_15AFB8(int handle, void *pos, char *data, int kind, int mask);

static __inline__ Rec *FindRec(unsigned int tag)
{
    unsigned int i;

    for (i = 0; i < D_001A7EA0->cnt_38; i++) {
        if (D_001A7EA0->recs_34[i].tag_24 == tag) {
            return &D_001A7EA0->recs_34[i];
        }
    }
    return 0;
}

static __inline__ int MakeHandle(unsigned int tag, char *data)
{
    Rec *rec;

    rec = FindRec(tag);
    if (rec == 0) {
        return 0;
    }
    return func_06FE68(rec, tag, data, 0xFF);
}

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_14A2A0(Obj *o)
{
    unsigned int i;
    Player *pl;
    Fx *fx;
    Tmpl *t;
    Rec *rec;
    int h;
    Vec3 v;

    fx = o->fx_58;
    t = o->tmpl_54;
    for (i = 0; i < 2; i++) {
        pl = func_112478(i);
        if (pl->w_F4 != 0 && pl->w_FC != fx->w_04 && func_114C78(pl->w_FC, (int)pl) != 0) {
            if (fx->h_28 == 0) {
                D_001B1090 = D_001B1090 + 1;
                if (D_001B1090 >= 4) {
                    fx->h_28 = MakeHandle(0xEC2F48F, D_001C0100);
                }
                if (fx->h_28 == 0) {
                    return;
                }
            }
            if (o->kind_45 == 1) {
                func_15AFB8(fx->h_28, t->p_04 + 0x30, D_001B1088, 0x53, 1 << (pl->w_F4 - 1));
            } else if (o->kind_45 != 2) {
                Copy3(&v, &o->pos_30);
                v.y = v.y + -1.0f;
                func_15AFB8(fx->h_28, &v, D_001B1088, 0x4B, 1 << (pl->w_F4 - 1));
            }
            return;
        }
    }
}
