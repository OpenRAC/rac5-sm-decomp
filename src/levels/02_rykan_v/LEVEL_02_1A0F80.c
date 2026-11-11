/* LEVEL_02:0x1A0F80 -- collects the candidate targets that pass the test into the object's list and returns their count. */
typedef struct {
    char pad0[0x3F];
    unsigned char b3F;
    char pad40[5];
    unsigned char b45;
} Target;

typedef struct {
    Target *p;
    char pad4[0x18];
} Slot;

typedef struct {
    char pad0[0x54];
    Slot *slots;
} Group;

typedef struct {
    char pad0[0x10];
    Target *list[4];
    int count;
    Group *group;
} Ctx;

typedef struct {
    char pad0[0x54];
    Ctx *ctx;
} Obj;

typedef struct {
    char pad0[0x40];
    char *ent40;
} Ent;

typedef struct {
    char pad0[0x44];
    char *ents;
    unsigned int count;
} Pool;

extern Target *D_0024CBEC;
extern Pool *D_0021BD50;

extern int func_1A1160(Obj *, void *);

float func_1A0F80(Obj *obj, unsigned char *flag)
{
    Ctx *c = obj->ctx;
    float n = 0.0f;
    unsigned int i;
    unsigned int j;
    int off;
    Target *t;
    Ent *e;

    c->count = 0;
    *flag = 0;
    if (c->group) {
        t = D_0024CBEC;
        if (func_1A1160(obj, t)) {
            n = 1.0f;
            c->list[c->count++] = t;
            *flag = 1;
        }
        for (i = 0; i < 8; i++) {
            off = (unsigned char)i * 0x1C;
            t = *(Target **)((char *)c->group->slots + off);
            if (t && t->b45 && func_1A1160(obj, t)) {
                n += 1.0f;
                c->list[c->count++] = t;
            }
        }
    } else {
        for (j = 0; j < D_0021BD50->count; j++) {
            e = (Ent *)(D_0021BD50->ents + j * 0x80);
            if (e->ent40 && (unsigned int)(((Target *)e->ent40)->b3F - 2) < 2
                && func_1A1160(obj, e)) {
                n += 1.0f;
                c->list[c->count++] = (Target *)e;
            }
        }
    }
    return n;
}
