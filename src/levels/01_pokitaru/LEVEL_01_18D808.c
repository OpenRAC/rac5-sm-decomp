/* LEVEL_01:0x18D808 -- resets the object's selector byte to 0xFF, restarts its pose at zero and flags it. */
typedef struct {
    char pad_00[0x45];
    unsigned char sel;
    char pad_46[0x1E];
    unsigned flags;
} Obj;

extern void func_18DA70(Obj *o, int a);

int func_18D808(Obj *o)
{
    o->sel = 0xFF;
    func_18DA70(o, 0);
    o->flags |= 0x10;
    return 1;
}
