/* LEVEL_04:0x14ED98 -- copies the block the object points at into the
   caller's buffer. */
typedef struct {
    float f[4];
} Block;

typedef struct {
    char pad[0x58];
    Block *p;
} Obj;

void func_14ED98(Obj *o, Block *dst)
{
    *dst = *o->p;
}
