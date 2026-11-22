/* LEVEL_06:0x01B370 -- placement copy of LEVEL_01_01CB70.c: finds the first object in reach of a point whose class mask matches and whose class hook accepts it. */
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

extern char D_0021C478[];
extern Node **D_0021C548;

extern int func_08E6F0(Node **list, char *rec, Vec4 *pos, Vec3 *center, int a, int b);
extern int func_01EB88(Vec3 *center, float f, int arg, int kind, Obj *o);
extern int func_10ADC0(float f, Vec3 *center, int arg, Obj *o);

Obj *func_01B370(float dy, Vec3 *center, int a, int b, int mask, int hook)
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
    cursor = D_0021C548;
    rec = D_0021C478;
    do {
        cursor += func_08E6F0(cursor, rec, pp, center, a, b);
        rec += 0x68;
    } while (rec < D_0021C478 + 0xD0);
    n = cursor - D_0021C548;
    p = D_0021C548;
    end = p + n;
    for (; p != end; p++) {
        o = (*p)->obj;
        if (((mask >> o->cls->group) ^ 1) & 1) {
            continue;
        }
        ent = (Ent *)((char *)o->cls->ents + o->slot * 0x34);
        h = ent->hook[hook];
        if (h != 0) {
            hit = func_01EB88(center, dy, h->arg, h->kind, o);
        } else {
            hit = func_10ADC0(dy, center, ent->fallback, o);
        }
        if (hit != 0) {
            return o;
        }
    }
    return 0;
}
