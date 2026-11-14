/* LEVEL_04:0x195B18 -- asks the helper for a point and returns it offset by two fixed vectors in the two output vectors; returns 1. */
typedef struct {
    float x, y, z;
} V3;

extern V3 D_0023C968;
extern V3 D_0023C978;
extern void func_0858F8(V3 *out, int arg);

int func_195B18(V3 *a, V3 *b, int arg)
{
    V3 p;

    func_0858F8(&p, arg);
    a->x = p.x + D_0023C968.x;
    a->y = p.y + D_0023C968.y;
    a->z = p.z + D_0023C968.z;
    b->x = p.x + D_0023C978.x;
    b->y = p.y + D_0023C978.y;
    b->z = p.z + D_0023C978.z;
    return 1;
}
