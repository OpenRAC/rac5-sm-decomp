/* LEVEL_24:0x034E30 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_034EA8(void *obj);
extern void func_0031B0(int value);

void func_034E30(Obj *o, int clear)
{
    func_034EA8(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_0031B0(0);
    }
}
