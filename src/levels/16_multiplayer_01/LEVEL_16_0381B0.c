/* LEVEL_16:0x0381B0 -- reports whether the object's counter word is nonzero. */
typedef struct {
    char pad0[0x5D8];
    unsigned int count;
} Obj;

int func_0381B0(Obj *o)
{
    return o->count != 0;
}
