/* LEVEL_16:0x037D00 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_037D78(void *obj);
extern void func_002FA0(int value);

void func_037D00(Obj *o, int clear)
{
    func_037D78(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_002FA0(0);
    }
}
