/* LEVEL_10:0x1C7E08 -- fetches the object's reference position (from its linked record when that is a type-2 record, else the object's own position), copies it to both outputs and, for the linked case, runs the follow-up helper on it. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Sub {
    char pad_00[4];
    V3 *pos;
    char pad_08[0x0C];
    unsigned short type;
} Sub;

typedef struct Rec {
    char pad_00[4];
    Sub *sub;
} Rec;

typedef struct Obj {
    char pad_00[0x30];
    V3 pos;
    char pad_3C[0x54 - 0x3C];
    Rec *rec;
} Obj;

extern void func_119418(V3 *a, V3 *b, char *c);

static __inline__ void CopyV3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

int func_1C7E08(V3 *out1, V3 *out2, Obj *obj)
{
    Sub *s;

    s = obj->rec->sub;
    if (s != 0) {
        if (s->type != 2) {
            return 0;
        }
        CopyV3(out1, s->pos);
        CopyV3(out2, out1);
        func_119418(out1, out2, (char *)s->pos + 0x10);
    } else {
        CopyV3(out1, &obj->pos);
        CopyV3(out2, out1);
    }
    return 1;
}
