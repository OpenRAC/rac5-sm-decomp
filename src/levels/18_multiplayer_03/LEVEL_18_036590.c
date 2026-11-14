/* LEVEL_18:0x036590 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_036608(void *obj);
extern void func_003010(int value);

void func_036590(Obj *o, int clear)
{
    func_036608(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_003010(0);
    }
}
