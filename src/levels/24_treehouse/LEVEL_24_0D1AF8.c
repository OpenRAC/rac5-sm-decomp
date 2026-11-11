/* LEVEL_24:0x0D1AF8 -- hands the next queued vector of the object to the
   caller and hands the object over to the post-process routine. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    Vec3 items[8];
    int last;
    int count;
} Obj;

void func_0D1A80(Obj *obj);

int func_0D1AF8(Obj *obj, Vec3 *out)
{
    int count = obj->count;

    if (obj->last == count)
        return 0;
    if (out == 0)
        return 0;

    *out = obj->items[count];
    func_0D1A80(obj);
    return 1;
}
