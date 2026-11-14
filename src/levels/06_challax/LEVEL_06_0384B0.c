/* LEVEL_06:0x0384B0 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_038528(void *obj);
extern void func_0033A8(int value);

void func_0384B0(Obj *o, int clear)
{
    func_038528(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_0033A8(0);
    }
}
