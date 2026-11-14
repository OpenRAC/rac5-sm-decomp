/* LEVEL_01:0x03BDA8 -- runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_03BE20(void *obj);
extern void func_0033A8(int value);

void func_03BDA8(Obj *o, int clear)
{
    func_03BE20(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_0033A8(0);
    }
}
