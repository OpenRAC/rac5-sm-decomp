/* LEVEL_09:0x0C24D0 -- copies a four-float vector from the argument into the
   global vector. */
typedef struct {
    float f[4];
} Vec4;

extern char D_00313198[];

void func_0C24D0(Vec4 *src)
{
    *(Vec4 *)D_00313198 = *src;
}
