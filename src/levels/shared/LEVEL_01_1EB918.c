/* LEVEL_01:0x1EB918 -- returns the signed 16-bit field at offset 6 of an object. */
typedef struct {
    char pad0[6];
    short h06;
} Obj;

int func_1EB918(Obj *o)
{
    return o->h06;
}
