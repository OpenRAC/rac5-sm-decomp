/* LEVEL_17:0x0375A0 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_037618(void *obj);
extern void func_002FA0(int value);

void func_0375A0(Obj *o, int clear)
{
    func_037618(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_002FA0(0);
    }
}
