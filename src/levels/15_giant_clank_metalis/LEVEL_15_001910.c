/* LEVEL_15.REL:0x001910 -- adds the frame the helper builds to the point. */
typedef struct { float x, y, z; } Vec3;
extern void func_0018C8(Vec3 *out, char *sub, float p, float q, float r, float s);
void func_001910(Vec3 *out, char *sub, Vec3 *in, float p, float q, float r, float s)
{
    Vec3 tmp;

    func_0018C8(&tmp, sub, p, q, r, s);
    out->x = in->x + tmp.x;
    out->y = in->y + tmp.y;
    out->z = in->z + tmp.z;
}
