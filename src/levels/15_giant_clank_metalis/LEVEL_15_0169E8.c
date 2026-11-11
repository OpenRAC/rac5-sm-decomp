/* LEVEL_15:0x0169E8 -- copies the level's default vector (the global at
   0x177D68) into the buffer the caller hands over, and gives the buffer
   back.  Twelve bytes: one quadword and one word. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_177D68;

Vec3 *func_0169E8(Vec3 *dst)
{
    *dst = D_177D68;
    return dst;
}
