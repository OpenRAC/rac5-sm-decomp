/* LEVEL_18:0x15E090 -- creates the object for a fixed id, keeps it in a global and sets its two size floats. */
struct Obj {
    char pad0[0x18];
    float f18;
    float f1C;
};

extern struct Obj *D_001BF264[1];
extern int func_105B48(unsigned int value);

void func_15E090(void)
{
    D_001BF264[0] = (struct Obj *)func_105B48(0x9F0FF2C9u);
    if (D_001BF264[0] != 0) {
        D_001BF264[0]->f18 = 18.0f;
        D_001BF264[0]->f1C = 180.0f;
    }
}
