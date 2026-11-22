/* LEVEL_09:0x01BF60 -- placement copy of LEVEL_01_01CB70.c: finds the first object in reach of a point whose class mask matches and whose class hook accepts it. */
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
    Hook *hook[2];
    int fallback;
} Ent;

typedef struct Cls {
    char pad00[4];
    Ent *ents;
    char pad08[0x37];
    unsigned char group;
} Cls;

typedef struct Obj {
    char pad00[0x40];
    Cls *cls;
    unsigned char slot;
} Obj;

typedef struct Node {
    int pad;
    Obj *obj;
} Node;

extern char D_00216E78[];
extern Node **D_00216F48;

extern int func_0921F8(Node **list, char *rec, Vec4 *pos, Vec3 *center, int a, int b);
extern int func_01F778(Vec3 *center, float f, int arg, int kind, Obj *o);
extern int func_10DBE0(float f, Vec3 *center, int arg, Obj *o);

Obj *func_01BF60(float dy, Vec3 *center, int a, int b, int mask, int hook)
{
    Vec4 pos[2];
    Vec4 *pp;
    char *rec;
    Node **cursor;
    Node **p;
    Node **end;
    Obj *o;
    Ent *ent;
    Hook *h;
    int hit;
    int n;

    pos[0].x = center->x;
    pos[0].y = center->y - dy;
    pos[0].z = center->z;
    pp = pos;
    cursor = D_00216F48;
    rec = D_00216E78;
    do {
        cursor += func_0921F8(cursor, rec, pp, center, a, b);
        rec += 0x68;
    } while (rec < D_00216E78 + 0xD0);
    n = cursor - D_00216F48;
    p = D_00216F48;
    end = p + n;
    for (; p != end; p++) {
        o = (*p)->obj;
        if (((mask >> o->cls->group) ^ 1) & 1) {
            continue;
        }
        ent = (Ent *)((char *)o->cls->ents + o->slot * 0x34);
        h = ent->hook[hook];
        if (h != 0) {
            hit = func_01F778(center, dy, h->arg, h->kind, o);
        } else {
            hit = func_10DBE0(dy, center, ent->fallback, o);
        }
        if (hit != 0) {
            return o;
        }
    }
    return 0;
}
