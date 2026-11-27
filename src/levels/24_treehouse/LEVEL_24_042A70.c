/* LEVEL_24:0x042A70 -- placement copy of LEVEL_01_049A88.c: lowers the float at pf to the ground below the object (or by 1000 units when the global mode rejects it) and notifies the owner key; returns 2 when it changed pf, 1 otherwise. */
typedef struct {
    float x, y, z, w;
} V3;

typedef struct {
    float n[3];
    unsigned short flags;
    char pad[0x12];
} Hit;

typedef struct {
    char pad0[0x30];
    float x;
    float y;
    float z;
    char pad3C[0x560];
    void *key;
} Obj;

extern float D_001FB604;
extern int func_014F18(float limit, float *out);
extern void func_014ED8(void *key);
extern int func_01E7C0(float f, V3 *a, Hit *b, V3 *c, int d, int e);

int func_042A70(Obj *o, float *pf, float *pg, unsigned int flags)
{
    V3 pos;
    Hit hit;
    V3 res;
    float f0;
    float f1;

    flags = flags & 0xFFFF;
    if (func_014F18(*pf, pg) != 0) {
        f0 = *pg;
        goto far;
    }
    if ((flags & 8) != 0 && pg != 0) {
        *pg = *pf;
        pos.x = o->x;
        pos.y = *pf - 9.999999747378752e-06f;
        pos.z = o->z;
        if ((unsigned char)func_01E7C0(pos.y - D_001FB604, &res, &hit, &pos, 0x68, 0)) {
            f0 = pos.y;
            f1 = res.x;
        } else {
            f0 = pos.y;
far:
            f1 = 1000.0f;
        }
        *pf = f0 - f1;
        func_014ED8(o->key);
        return 2;
    }
    return 1;
}
