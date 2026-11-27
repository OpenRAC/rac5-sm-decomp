/* LEVEL_08:0x168C78 -- placement copy of LEVEL_02_160D80.c: unless finished or of kind 4, kinds 2 and 3 run the kind handler and the others start the 0.15 effect and mark the object finished. */
typedef struct Obj Obj;

extern void func_168D58(Obj *o, unsigned char kind, int flag);
extern void func_084C98(Obj *o, int a, int b, int c, float x, float y);

struct Obj {
    char pad_00[0x45];
    unsigned char kind;
    unsigned char phase;
};

void func_168C78(Obj *o)
{
    if (o->phase != 2 && o->kind != 4) {
        if (o->kind == 2 || o->kind == 3) {
            func_168D58(o, o->kind, 4);
        } else {
            func_084C98(o, 1, 0, 1, 0.15000000596046448f, 0.0f);
            o->phase = 2;
        }
    }
}
