/* LEVEL_07:0x0DA1F0 -- same shape as the level 24 routine: the next queued
   vector of the object goes to the caller, then the object is post-processed. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    Vec3 items[8];
    int last;
    int count;
} Obj;

void func_0DA178(Obj *obj);

int func_0DA1F0(Obj *obj, Vec3 *out)
{
    int count = obj->count;

    if (obj->last == count)
        return 0;
    if (out == 0)
        return 0;

    *out = obj->items[count];
    func_0DA178(obj);
    return 1;
}
