/* LEVEL_08:0x20E860 -- placement copy of LEVEL_01_1D0770.c: resolves a position against the world and updates the object position. */
typedef struct { float x, y, z, w; } Vec;
typedef struct { char pad[8]; int f8; char pad2[0x4C - 12]; } Ent;
typedef struct { char pad[0xC]; Ent *tab; } World;
typedef struct { char pad[0x30]; float x, y, z; char pad2[0x45 - 0x3C]; unsigned char hit; } Obj;
extern int func_122B68(Vec *a, Vec *b);
extern unsigned int func_1214A8(void);
extern int func_20E3D0(Obj *o, int p, float *q, Vec *b, Vec *a, int *e);

void func_20E860(Obj *obj, int p, float *q)
{
    Vec a;
    Vec b;
    Vec *pos;
    int idx;

    pos = (Vec *)&obj->x;
    a.x = obj->x;
    a.y = pos->y;
    a.z = pos->z;
    a.w = *q;
    idx = func_122B68(&a, &b);
    if (idx >= 0) {
        if (func_20E3D0(obj, p, q, &b, &a, &((World *)func_1214A8())->tab[idx].f8)) {
            obj->hit = 1;
        }
    }
    pos = (Vec *)&obj->x;
    obj->x = a.x;
    pos->y = a.y;
    pos->z = a.z;
}
