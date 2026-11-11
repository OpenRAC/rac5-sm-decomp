/* LEVEL_07.REL:0x1A5918 -- when the caller's record carries the expected tag,
   samples func_1A58A0 and arms the slot unless the sample is the no-value. */
typedef struct {
    char pad0[0x24];
    int f_24;
} Tag;

typedef struct {
    int f_00;
    char pad0[4];
    int f_08;
    char pad1[0x2C - 0x0C];
    float f_2C;
    char pad2[0x4C - 0x30];
    signed char b_4C;
} Slot;

typedef struct {
    char pad0[0x40];
    Tag *f_40;
    char pad1[0x58 - 0x44];
    Slot *f_58;
} Obj;

float func_1A58A0(int a0);

void func_1A5918(Obj *o, int a1)
{
    Slot *s;
    float r;

    if (o->f_40->f_24 != 0xECFD0651)
        return;
    s = o->f_58;
    r = func_1A58A0(a1);
    s->f_2C = r;
    if (r == -1.0f)
        return;
    s->f_08 = a1;
    s->b_4C = 1;
}
