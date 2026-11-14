/* LEVEL_10:0x03A470 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_03A4E8(void *obj);
extern void func_003158(int value);

void func_03A470(Obj *o, int clear)
{
    func_03A4E8(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_003158(0);
    }
}
