/* LEVEL_01:0x03C178 -- stores a value into the object field at 0x5D4. */
typedef struct {
    char pad[0x5D4];
    int w5D4;
} Obj;

void func_03C178(Obj *o, int v)
{
    o->w5D4 = v;
}
