/* LEVEL_01:0x1E85A8 -- scales four differences of the object's floats down to
   the fixed-point range used by the shared code. */
typedef struct {
    float a[7];
    float o0;
    float o1;
    float o2;
    float o3;
} Obj;

void func_1E85A8(Obj *o)
{
    o->o0 = -o->a[0] / 1073741824.0f;
    o->o1 = (o->a[2] - o->a[1]) / 2147483648.0f;
    o->o2 = (o->a[4] - o->a[3]) / 2147483648.0f;
    o->o3 = (o->a[6] - o->a[5]) / 2147483648.0f;
}
