/* LEVEL_08:0x0D0148 -- a four-float vector is copied into a global slot. */
typedef struct {
    float f[4];
} Vec4;

extern Vec4 D_0037AC98;

void func_0D0148(Vec4 *a0)
{
    D_0037AC98 = *a0;
}
