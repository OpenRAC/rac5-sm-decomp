/* LEVEL_02:0x040CA0 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_040D18(void *obj);
extern void func_0033A8(int value);

void func_040CA0(Obj *o, int clear)
{
    func_040D18(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_0033A8(0);
    }
}
