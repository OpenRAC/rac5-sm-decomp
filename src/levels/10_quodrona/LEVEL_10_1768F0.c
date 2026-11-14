/* LEVEL_10:0x1768F0 -- starts the object's effect unless it is already in mode 2 and fills its 28-byte parameter block from a shared default. */
typedef struct {
    int w[7];
} Params;

typedef struct {
    char padA4[0xA4];
    Params params;
} Obj;

extern Params D_0039F220;

extern int func_173020(char *object);
extern void func_1730A0(Obj *o, int mode, float a, float b);

void func_1768F0(void *unused, Obj *o)
{
    if (func_173020((char *)o) != 2) {
        func_1730A0(o, 2, 0.0f, 0.15000000596046448f);
    }
    o->params = D_0039F220;
}
