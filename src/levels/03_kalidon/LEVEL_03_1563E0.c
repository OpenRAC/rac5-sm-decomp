/* LEVEL_03:0x1563E0 -- placement copy of LEVEL_01_158958.c: looks up a template record by id, spawns it for an object and fills its point list from a table of values. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x100];
    short h_100;
    char pad_102[0x49A];
    int w_59C;
} Obj;

typedef struct {
    Obj *owner_00;
    float f_04;
    Vec3 pts_08[0x3B];
    unsigned char b_2CC;
} Sub;

typedef struct {
    char pad_00[0x58];
    Sub *sub_58;
    char pad_5C[0x14];
    float f_70;
} Res;

typedef struct {
    char pad_00[0x24];
    unsigned int id_24;
    char pad_28[0x1C];
} Slot;

typedef struct {
    char pad_00[0x34];
    Slot *slots_34;
    unsigned int count_38;
} Table;

extern Table *D_0021F410;
extern int D_002370E8[];
extern Res *func_07C350(Slot *s, unsigned int key, Obj *o, int mask);
extern void func_07CE78(int a, Vec3 *out, int b);

static __inline__ void VecCopy(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ Slot *findSlot(Table *t, unsigned int id)
{
    unsigned int i;

    for (i = 0; i < t->count_38; i++) {
        if (t->slots_34[i].id_24 == id) {
            return &t->slots_34[i];
        }
    }
    return 0;
}

Res *func_1563E0(Obj *o, float f)
{
    Slot *found;
    Res *r;
    Sub *sub;
    Vec3 tmp;
    unsigned int i;

    if (o == 0 || o->h_100 == 0x37) {
        return 0;
    }
    found = findSlot(D_0021F410, 0x0D9D072B);
    if (found == 0) {
        r = 0;
    } else {
        r = func_07C350(found, 0x0D9D072B, o, 0xFF);
    }
    if (r != 0) {
        sub = r->sub_58;
        sub->owner_00 = o;
        for (i = 0; i < 0x3B; i++) {
            func_07CE78(o->w_59C, &tmp, D_002370E8[i]);
            VecCopy(&sub->pts_08[i], &tmp);
        }
        sub->f_04 = f;
        r->f_70 = f;
        sub->b_2CC = 0;
    }
    return r;
}
