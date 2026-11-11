/* LEVEL_01:0x171E20 -- runs the follow-up handler while the object's state byte is zero. */
typedef struct {
    char pad[0x46];
    unsigned char b46;
} Obj;

extern void func_1720F8(Obj *o);

void func_171E20(Obj *o)
{
    if (o->b46 == 0)
        func_1720F8(o);
}
