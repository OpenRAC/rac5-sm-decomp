/* LEVEL_15.REL:0x001910 -- adds the frame the helper builds to the point. */
typedef struct { float x, y, z; } Vec3;
extern void func_0018C8(Vec3 *out, void *x);
void func_001910(Vec3 *out, void *x, Vec3 *in)
{
    Vec3 tmp;

    func_0018C8(&tmp, x);
    out->x = in->x + tmp.x;
    out->y = in->y + tmp.y;
    out->z = in->z + tmp.z;
}
