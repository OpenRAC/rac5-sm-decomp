/* USA LEVEL_01.REL:0x020570, 612-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 20 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Hook {
    unsigned char kind;
    char pad01[3];
    int arg;
} Hook;

typedef struct Ent {
    char pad00[0xC];
    Hook *hook;
    int pad10;
    int test;
} Ent;

typedef struct Cls {
    char pad00[4];
    Ent *ents;
    int test;
} Cls;

typedef struct Obj {
    char pad00[0x40];
    Cls *cls;
    unsigned char idx;
} Obj;

typedef struct Node {
    char pad00[2];
    unsigned char kind;
    char pad03;
    Obj *obj;
} Node;

typedef struct Res {
    char pad00[0xC];
    short h0C;
    short h0E;
    Obj *obj;
    int kind;
} Res;

extern char D_0022F6F8[];
extern Node **D_0022F7C8;
extern int D_00206D9C;

extern int func_114180(float *dy, Res *res, short *at, Vec3 *q, int g);
extern int func_095AA0(Node **list, char *rec, Vec4 *pos, Vec3 *q, int a, int b);
extern int func_114D20(float *dy, Res *res, short *at, Vec3 *q, int test, Obj *o);
extern int func_01FD30(float *dy, Res *res, Vec3 *q, int arg, int kind, Obj *o);

static inline Obj *Probe(Node *n, int *test, Hook **hook)
{
    Obj *o;
    Obj *t;
    Ent *ent;

    switch (n->kind) {
    case 2:
        t = n->obj;
        ent = (Ent *)((char *)t->cls->ents + t->idx * 0x34);
        *test = ent->test;
        *hook = ent->hook;
        o = t;
        break;
    case 3:
        o = n->obj;
        *test = o->cls->test;
        *hook = 0;
        break;
    case 4:
        o = n->obj;
        *test = o->cls->test;
        *hook = 0;
        break;
    default:
        *test = 0;
        *hook = 0;
        break;
    }
    return o;
}

int func_020570(float dy, float *out, Res *res, Vec3 *q, int a, int b)
{
    Vec4 pos[1];
    Vec4 *pp;
    int test;
    Hook *hook;
    char *rec;
    Node **cursor;
    Node **p;
    Node **end;
    Node *n;
    Obj *o;
    int hit;
    int n2;

    hit = 0;
    if (func_114180(&dy, res, &res->h0C, q, D_00206D9C) != 0) {
        hit = 1;
        res->kind = hit;
    }
    pos[0].x = q->x;
    pos[0].y = q->y - dy;
    pos[0].z = q->z;
    pp = pos;
    cursor = D_0022F7C8;
    rec = D_0022F6F8;
    do {
        cursor += func_095AA0(cursor, rec, pp, q, a, b);
        rec += 0x68;
    } while (rec < D_0022F6F8 + 0xD0);
    n2 = cursor - D_0022F7C8;
    p = D_0022F7C8;
    end = p + n2;
    for (; p != end; p++) {
        n = *p;
        o = Probe(n, &test, &hook);
        if (test != 0) {
            if (func_114D20(&dy, res, &res->h0C, q, test, o) != 0) {
                hit = 1;
                res->kind = n->kind;
                res->obj = n->obj;
            }
        } else if (hook != 0) {
            if (func_01FD30(&dy, res, q, hook->arg, hook->kind, o) != 0) {
                hit = 1;
                res->kind = n->kind;
                res->obj = n->obj;
                res->h0C = 0;
                res->h0E = 0;
            }
        }
    }
    if (hit) {
        *out = dy;
    }
    return hit;
}
