/* LEVEL_08:0x1B5140 -- when the object is flagged and func_084A40 accepts, clears the flag and starts the follow-up. */
struct Obj {
    char pad0[0x45];
    unsigned char f45;
};

extern int func_084A40(struct Obj *o, int a1);
extern void func_084C98(float a, float b, struct Obj *o, int c, int d, int e);

void func_1B5140(struct Obj *o)
{
    if (o->f45 != 0 && func_084A40(o, 0) != 0) {
        o->f45 = 0;
        func_084C98(0.15f, 0.0f, o, 0, 0, 1);
    }
}
