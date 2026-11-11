/* LEVEL_04:0x161380 -- fetches a world object and copies its three-float
   position into the global position of the level. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    char pad[0x70];
    Vec3 pos;
} Obj;

extern char D_003AC7D4[];

Obj *func_09C430(int a, int b);

void func_161380(void)
{
    Obj *obj = func_09C430(0, 0);

    *(Vec3 *)D_003AC7D4 = obj->pos;
    *(char *)((char *)D_003AC7D4 - 4) = 1;
}
