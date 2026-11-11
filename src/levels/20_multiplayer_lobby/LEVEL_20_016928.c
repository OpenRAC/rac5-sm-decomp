/* LEVEL_20:0x016928 -- copies a three-float vector from the global into the
   argument's vector. */
typedef struct {
    float f[3];
} Vec3;

extern char D_00136268[];

Vec3 *func_016928(Vec3 *dst)
{
    *dst = *(Vec3 *)D_00136268;
    return dst;
}
