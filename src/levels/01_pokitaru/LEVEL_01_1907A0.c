/* LEVEL_01:0x1907A0 -- looks up an object by hash, stores it in a global and sets one of its floats to 0.5. */
typedef struct {
    char pad00[0x14];
    float f14;
} Obj;

extern Obj *D_00208724;
extern int func_12A068(unsigned int value);

void func_1907A0(void)
{
    Obj *o = (Obj *)func_12A068(0xCFA43EA2u);

    D_00208724 = o;
    if (o != 0) {
        o->f14 = 0.5f;
    }
}
