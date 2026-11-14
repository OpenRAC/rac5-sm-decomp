/* LEVEL_10:0x191AF0 -- placement copy of LEVEL_04_195B18.c: asks the helper for a point and returns it offset by two fixed vectors in the two output vectors; returns 1. */
typedef struct {
    float x, y, z;
} V3;

extern V3 D_0022CC78;
extern V3 D_0022CC88;
extern void func_082B48(V3 *out, int arg);

int func_191AF0(V3 *a, V3 *b, int arg)
{
    V3 p;

    func_082B48(&p, arg);
    a->x = p.x + D_0022CC78.x;
    a->y = p.y + D_0022CC78.y;
    a->z = p.z + D_0022CC78.z;
    b->x = p.x + D_0022CC88.x;
    b->y = p.y + D_0022CC88.y;
    b->z = p.z + D_0022CC88.z;
    return 1;
}
