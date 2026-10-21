/* LEVEL_03:0x01A568 -- copies the level's default vector (the global at
   0x24AA68) into the buffer the caller hands over, and gives the buffer
   back.  Twelve bytes: one quadword and one word. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_24AA68;

Vec3 *func_01A568(Vec3 *dst)
{
    *dst = D_24AA68;
    return dst;
}
