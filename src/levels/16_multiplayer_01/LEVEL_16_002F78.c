/* LEVEL_16:0x002F78 -- copy one 12-byte vector (three floats) into the big
   structure the game keeps in the global at 0x19ACDC.  The vector field of
   that structure sits at offset 0x1D8, so the retail stores the eight-byte
   half at 0x1D8 and the last float at 0x1E0. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad[0x1D8];
    Vec3 v;
} Big;

extern struct {
    Big *p;
} D_0019ACDC;

void func_002F78(Vec3 *src)
{
    D_0019ACDC.p->v = *src;
}
