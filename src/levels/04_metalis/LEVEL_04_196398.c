/* LEVEL_04:0x196398 -- placement copy of LEVEL_04_195B18.c: asks the helper for a point and returns it offset by two fixed vectors in the two output vectors; returns 1. */
typedef struct {
    float x, y, z;
} V3;

extern V3 D_0023CBF8;
extern V3 D_0023CC08;
extern void func_0858F8(V3 *out, int arg);

int func_196398(V3 *a, V3 *b, int arg)
{
    V3 p;

    func_0858F8(&p, arg);
    a->x = p.x + D_0023CBF8.x;
    a->y = p.y + D_0023CBF8.y;
    a->z = p.z + D_0023CBF8.z;
    b->x = p.x + D_0023CC08.x;
    b->y = p.y + D_0023CC08.y;
    b->z = p.z + D_0023CC08.z;
    return 1;
}
