/* LEVEL_15:0x10C588 -- resets one float field of the object to 1.0f. */
typedef struct {
    char pad[0x50];
    float f;
} Obj;

void func_10C588(Obj *o)
{
    o->f = 1.0f;
}
