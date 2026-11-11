/* LEVEL_03:0x195648 -- clears one flag bit and sets another in the object's flag word, returning 3. */
typedef struct {
    char pad00[0x64];
    int flags;
} Obj;

int func_195648(Obj *o)
{
    o->flags = (o->flags & ~0x10) | 0x200000;
    return 3;
}
