/* LEVEL_10:0x0D95D0 -- the next row of the spawn list is copied out and
   the spawner is told about it. */
typedef struct {
    int i[3];
} Row;

typedef struct {
    Row rows[8];
    int index;
    int count;
} Obj;

typedef struct {
    Row s;
} Dest;

void func_0D9558(Obj *obj);

int func_0D95D0(Obj *obj, Dest *dst)
{
    int count = obj->count;
    int index = obj->index;

    if (index == count)
        return 0;
    if (!dst)
        return 0;

    dst->s = obj->rows[count];
    func_0D9558(obj);
    return 1;
}
