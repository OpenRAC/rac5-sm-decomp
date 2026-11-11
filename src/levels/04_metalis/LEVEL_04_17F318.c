/* LEVEL_04:0x17F318 -- placement copy of LEVEL_01_171E20.c: runs the follow-up handler while the object's state byte is zero. */
typedef struct {
    char pad[0x46];
    unsigned char b46;
} Obj;

extern void func_17F5F0(Obj *o);

void func_17F318(Obj *o)
{
    if (o->b46 == 0)
        func_17F5F0(o);
}
