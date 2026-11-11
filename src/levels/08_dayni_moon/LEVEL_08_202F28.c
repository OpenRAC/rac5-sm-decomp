/* LEVEL_08:0x202F28 -- store two parameters in the object, copy its block
   of six floats, then hand the object over to the update routine. */
typedef struct {
    float f[6];
} Block;

typedef struct {
    int kind;
    int id;
    Block block;
} Object;

extern void func_202F20(Object *object);

void func_202F28(Object *dst, int kind, int id, Block *src)
{
    dst->kind = kind;
    dst->id = id;
    dst->block = *src;
    func_202F20(dst);
}
