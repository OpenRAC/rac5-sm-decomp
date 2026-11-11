/* LEVEL_05:0x18CA40 -- looks up an object by hash, stores it in a global and sets two of its floats to 45. */
typedef struct {
    char pad00[0x18];
    float f18;
    float f1C;
} Obj;

extern Obj *D_001F78E4;
extern int func_1259E0(unsigned int value);

void func_18CA40(void)
{
    Obj *o = (Obj *)func_1259E0(0x8369B064u);

    D_001F78E4 = o;
    if (o != 0) {
        o->f18 = 45.0f;
        o->f1C = 45.0f;
    }
}
