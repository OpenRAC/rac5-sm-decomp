/* LEVEL_02:0x160D80 -- unless finished or of kind 4, kinds 2 and 3 run the kind handler and the others start the 0.15 effect and mark the object finished. */
typedef struct Obj Obj;

extern void func_160E60(Obj *o, unsigned char kind, int flag);
extern void func_0835F8(Obj *o, int a, int b, int c, float x, float y);

struct Obj {
    char pad_00[0x45];
    unsigned char kind;
    unsigned char phase;
};

void func_160D80(Obj *o)
{
    if (o->phase != 2 && o->kind != 4) {
        if (o->kind == 2 || o->kind == 3) {
            func_160E60(o, o->kind, 4);
        } else {
            func_0835F8(o, 1, 0, 1, 0.15000000596046448f, 0.0f);
            o->phase = 2;
        }
    }
}
