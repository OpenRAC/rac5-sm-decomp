/* LEVEL_20:0x031FE8 -- placement copy of LEVEL_01_03BDA8.c: runs the object's refresh, sets one bit of its 64-bit state, and clears the pending value when asked. */
typedef struct {
    char pad[0x960];
    unsigned long long state;
} Obj;

extern void func_032060(void *obj);
extern void func_002F60(int value);

void func_031FE8(Obj *o, int clear)
{
    func_032060(o);
    o->state |= 0x1000000000ULL;
    if (clear != 0) {
        func_002F60(0);
    }
}
