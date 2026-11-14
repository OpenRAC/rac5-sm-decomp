/* LEVEL_04:0x03D788 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_03D800(void *obj);
extern void func_0031B0(int value);

void func_03D788(Obj *o, int clear)
{
    func_03D800(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_0031B0(0);
    }
}
