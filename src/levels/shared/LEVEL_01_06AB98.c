/* LEVEL_01:0x06AB98 -- resets one float field of the object to 1.0f. */
typedef struct {
    char pad[0xFA0];
    float f;
} Obj;

void func_06AB98(Obj *o)
{
    o->f = 1.0f;
}
