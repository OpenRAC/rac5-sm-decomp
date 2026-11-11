/* LEVEL_01.REL:0x193A10 -- resets the sub-object when the magic value matches. */
typedef struct {
    char pad[0x24];
    int f24;
} Mid;

typedef struct {
    char pad[0x8];
    int i8;
    int iC;
    char pad2[0x1C];
    float f2C;
    char pad3[0x1C];
    char b4C;
} Sub;

typedef struct {
    char pad[0x40];
    Mid *f40;
    char pad2[0x14];
    Sub *f58;
    char pad3[0x14];
    int f70;
} Obj;

void func_193A10(Obj *a0)
{
    if (a0->f40->f24 == 0xECFD0651) {
        Sub *s = a0->f58;

        s->i8 = 0;
        s->f2C = -1.0f;
        s->b4C = 0;
        s->iC = 0;
        a0->f70 = 0;
    }
}
