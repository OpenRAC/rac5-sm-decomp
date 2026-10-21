/* LEVEL_01:0x001908 -- stores the incoming values into the object's slots. */
typedef struct {
    char pad[4];
    float f1;
    float f0;
    int i0;
    int i1;
} Obj;

void func_001908(Obj *o, float f0, float f1, int i0, int i1)
{
    o->f0 = f0;
    o->f1 = f1;
    o->i0 = i0;
    o->i1 = i1;
}
