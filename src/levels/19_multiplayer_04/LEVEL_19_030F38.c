/* LEVEL_19:0x030F38 -- a three-component vector is copied into a global
   node; the node's fourth word is then set from the second argument. */
typedef struct {
    float x;
    float y;
    int z;
} Vec3;

typedef struct {
    Vec3 v;
    int w;
} Node;

extern Node D_001E3C68;

void func_030F38(Vec3 *a0, int a1)
{
    D_001E3C68.v = *a0;
    D_001E3C68.w = a1;
}
