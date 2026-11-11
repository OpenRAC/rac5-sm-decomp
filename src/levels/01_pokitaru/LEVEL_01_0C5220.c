/* LEVEL_01:0x0C5220 -- a four-float vector is copied into a global slot. */
typedef struct {
    float f[4];
} Vec4;

extern Vec4 D_0032BA18;

void func_0C5220(Vec4 *a0)
{
    D_0032BA18 = *a0;
}
