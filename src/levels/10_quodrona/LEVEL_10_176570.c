/* LEVEL_10:0x176570 -- starts the object's effect with a fixed length and fills its 28-byte parameter block from a shared default. */
typedef struct {
    int w[7];
} Params;

typedef struct {
    char padA4[0xA4];
    Params params;
} Obj;

extern Params D_0039F200;

extern void func_1730A0(Obj *o, int length, float a, float b);

void func_176570(void *unused, Obj *o)
{
    func_1730A0(o, 15, 0.0f, 0.15000000596046448f);
    o->params = D_0039F200;
}
