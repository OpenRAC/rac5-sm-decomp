/* LEVEL_10:0x169AD8 -- placement copy of LEVEL_04_195B18.c: asks the helper for a point and returns it offset by two fixed vectors in the two output vectors; returns 1. */
typedef struct {
    float x, y, z;
} V3;

extern V3 D_00229618;
extern V3 D_00229628;
extern void func_082B48(V3 *out, int arg);

int func_169AD8(V3 *a, V3 *b, int arg)
{
    V3 p;

    func_082B48(&p, arg);
    a->x = p.x + D_00229618.x;
    a->y = p.y + D_00229618.y;
    a->z = p.z + D_00229618.z;
    b->x = p.x + D_00229628.x;
    b->y = p.y + D_00229628.y;
    b->z = p.z + D_00229628.z;
    return 1;
}
