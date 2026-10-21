/* LEVEL_17:0x0184F0 -- copy the global vector at 0x1CFBE8 into the vector the
   caller passes in, and hand the pointer back. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_001CFBE8;

Vec3 *func_0184F0(Vec3 *dst)
{
    *dst = D_001CFBE8;
    return dst;
}
