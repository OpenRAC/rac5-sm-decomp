/* LEVEL_22:0x0030F0 -- copies the twelve bytes the caller hands over into
   the vector slot of the object the global 0x14E5D4 points to (the slot
   sits at 0x1D8 inside the object). */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad[0x1D8];
    Vec3 vec;
} Object;

extern Object *D_14E5D4;

void func_0030F0(Vec3 *src)
{
    D_14E5D4->vec = *src;
}
