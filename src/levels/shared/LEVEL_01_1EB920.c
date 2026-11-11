/* LEVEL_01:0x1EB920 -- returns the signed 16-bit field at offset 4 of an object. */
typedef struct {
    char pad_00[4];
    short s04;
} Obj;

short func_1EB920(Obj *o)
{
    return o->s04;
}
