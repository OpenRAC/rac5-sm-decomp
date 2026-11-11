/* LEVEL_04:0x0CAA38 -- a four-float vector is copied into a global slot. */
typedef struct {
    float f[4];
} Vec4;

extern Vec4 D_00346218;

void func_0CAA38(Vec4 *a0)
{
    D_00346218 = *a0;
}
