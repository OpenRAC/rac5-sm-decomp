/* LEVEL_18:0x129B90 -- placement copy of LEVEL_16_12AAE8.c: when the other object has the expected class and shares the same record, unlinks the object's data block, copies its start point from the other object's record and releases the first N resource slots; for other class bytes 0x0B/0x0D it forwards to the follow-up call and reports state 3. */
typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Rec {
    char pad_00[0x20];
    Vec3 pos;
} Rec;

typedef struct Data {
    struct Key *key_00;
    Link link;
    char pad_1C[0x3C - 0x1C];
    Vec3 pos;
    char pad_48[0x5C - 0x48];
    int *slots[12];
    char pad_8C;
    unsigned char flag;
} Data;

typedef struct Key {
    char pad_00[0xFC];
    int id_FC;
} Key;

typedef struct Cls {
    char pad_00[0x24];
    unsigned int tag_24;
    char pad_28[0x17];
    unsigned char kind_3F;
} Cls;

typedef struct Obj {
    char pad_00[0x40];
    Cls *cls_40;
    char pad_44;
    unsigned char state_45;
    char pad_46[0x12];
    Data *data_58;
} Obj;

typedef struct Other {
    char pad_00[0x40];
    Cls *cls_40;
    char pad_44[0x14];
    struct Other_Data *data_58;
} Other;

struct Other_Data {
    Key *key_00;
    int pad_04[9];
    int *h28;
};

extern int *D_001A5848;
extern const unsigned int D_001D23F4;
extern Rec *func_035D20(Key *k);
extern void func_087CF8(int *address);
extern int func_036BF8(Key *k, Other *other);
extern void func_06F008(int *h);

static __inline__ void Unlink(Link *l)
{
    if (l->prev != 0) {
        l->prev->next = l->next;
        if (l->next != 0) {
            l->next->prev = l->prev;
        }
        l->prev = 0;
    }
}

static __inline__ void CopyVec(Vec3 *dst, Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

static __inline__ void Release(int **slot)
{
    if (*slot != 0) {
        if (*slot == D_001A5848) {
            D_001A5848 = 0;
        } else {
            func_087CF8(*slot);
        }
        *slot = 0;
    }
}

int func_129B90(Obj *o, int a1, int a2, int a3, int a4, Other *other)
{
    Data *d;
    Rec *r;
    unsigned int i;
    unsigned char kind;

    d = o->data_58;
    if (other != 0) {
        if (other->cls_40->tag_24 == 0x9707D8E6u && other->data_58->key_00->id_FC == d->key_00->id_FC
            && o->state_45 == 5) {
            Unlink(&d->link);
            r = func_035D20(other->data_58->key_00);
            CopyVec(&d->pos, &r->pos);
            o->state_45 = 1;
            *(int *)((char *)d + 0x80) = 0;
            if (*((unsigned char *)d + 0x8D) != 0) {
                for (i = 0; i < D_001D23F4; i++) {
                    Release(&d->slots[i]);
                }
                d->flag = 0;
            }
        } else if (other != 0) {
            kind = other->cls_40->kind_3F;
            if (kind != 0xD && kind != 0xB)
                return 0;
            if (func_036BF8(d->key_00, other) == 0)
                return 0;
            if (*(int **)((char *)d + 0x28) == 0)
                return 0;
            ((void (*)(int *h, int a))func_06F008)(*(int **)((char *)d + 0x28), 1);
            return 3;
        }
    }
    return 0;
}
