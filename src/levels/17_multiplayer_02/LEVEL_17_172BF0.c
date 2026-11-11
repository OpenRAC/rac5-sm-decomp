/* LEVEL_17:0x172BF0 -- placement copy of LEVEL_16_17F5A8.c: returns 1 when two objects are within 1.5 units (squared distance < 2.25). */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad0[0x30];
    Vec3 pos;
    char pad1[0xB8];
    int f_f4;
} Obj;

int func_037C08(Obj *o);

int func_172BF0(Obj *a, Obj *b)
{
    Vec3 *pa;
    Vec3 *pb;
    float dx;
    float dy;
    float dz;
    int r;

    r = 0;
    if (b->f_f4 != 0 && func_037C08(b) == 0) {
        pa = &a->pos;
        pb = &b->pos;
        dx = pb->x - pa->x;
        dy = pb->y - pa->y;
        dz = pb->z - pa->z;
        if (dx * dx + dy * dy + dz * dz < 2.25f) {
            r = 1;
        }
    }
    return r;
}
