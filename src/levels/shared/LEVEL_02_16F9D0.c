/* LEVEL_02:0x16F9D0 -- sets two flag bits on the object and returns 1. */
typedef struct {
    char pad00[0x64];
    unsigned int flags;
} Obj;

int func_16F9D0(Obj *o)
{
    o->flags = o->flags | 0x30;
    return 1;
}
