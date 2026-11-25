/* LEVEL_22:0x05F488 -- placement copy of LEVEL_01_069880.c: placement copy of LEVEL_16_05C288.c: toggles state flags on an actor and notifies subsystems. */
typedef unsigned long long u64;
typedef unsigned short u16;

typedef struct {
    char pad0[0x10C];
    u16 id;
    char pad10E[0x48E];
    struct { char pad0[0x74]; u16 v; } *link;
    char pad5A0[0x3C0];
    u64 state;
    char pad968[0x5A8];
    u64 flags;
} Actor;

extern char D_00186D40[];
extern int func_02E988(void *p);
extern void func_031AD8(int a);
extern void func_031B30(int a);
extern void func_031BD8(int a);
extern void func_05F028(Actor *a, long b);

void func_05F488(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_02E988(D_00186D40) & 0xFF) == 0) {
        func_031AD8(on);
        func_031B30(on);
        func_031BD8(on);
    }
    func_05F028(a, on);
}
