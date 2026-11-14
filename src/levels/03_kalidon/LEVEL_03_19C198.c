/* LEVEL_03:0x19C198 -- when the lookup on the object's record succeeds, moves the shared position by the record's direction scaled by dt times the record ratio. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Target {
    char pad00[0x24];
    Vec3 dir;
} Target;

typedef struct Rec {
    Target *target;
    float rate;
    float length;
} Rec;

typedef struct Obj {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern char D_0024FFC0[];

extern void func_01A0B0(float *a0);
extern int func_084588(Target *t, float *v);

void func_19C198(Obj *o, float dt)
{
    float local[3];
    Rec *rec = o->rec;

    func_01A0B0(local);
    if (func_084588(rec->target, local) != 0) {
        float scale = rec->rate * dt / rec->length;
        char *base = D_0024FFC0;
        Vec3 *dst = (Vec3 *)(base + 0xAA4);
        Vec3 *src = &rec->target->dir;

        dst->x = dst->x + src->x * scale;
        dst->y = dst->y + src->y * scale;
        dst->z = dst->z + src->z * scale;
    }
}
