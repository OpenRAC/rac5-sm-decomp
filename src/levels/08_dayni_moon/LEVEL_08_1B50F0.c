/* LEVEL_08:0x1B50F0 -- resets the object's pose index, restarts its pose at zero and flags it. */
typedef struct {
    char pad_00[0x45];
    unsigned char sel;
    char pad_46[0x1E];
    unsigned flags;
} Obj;

extern void func_084AC8(Obj *o, float t, unsigned idx);

int func_1B50F0(Obj *o)
{
    o->sel = 0;
    func_084AC8(o, 0.0f, 0);
    o->flags |= 0x4000000;
    return 1;
}
