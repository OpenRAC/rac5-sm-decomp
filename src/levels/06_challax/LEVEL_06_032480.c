/* LEVEL_06:0x032480 -- copies a three-float vector into the global vector and
   stores the second argument in the word that follows it. */
typedef struct {
    float f[3];
} Vec3;

extern char D_00221920[];

void func_032480(Vec3 *src, int value)
{
    *(Vec3 *)D_00221920 = *src;
    *(int *)((char *)D_00221920 + 0xC) = value;
}
