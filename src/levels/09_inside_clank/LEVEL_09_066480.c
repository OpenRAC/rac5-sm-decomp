/* LEVEL_09:0x066480 -- placement copy of LEVEL_01_069880.c: placement copy of LEVEL_16_05C288.c: toggles state flags on an actor and notifies subsystems. */
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

extern char D_0021C8C0[];
extern int func_035240(void *p);
extern void func_0383F8(int a);
extern void func_038450(int a);
extern void func_0384F8(int a);
extern void func_066020(Actor *a, long b);

void func_066480(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_035240(D_0021C8C0) & 0xFF) == 0) {
        func_0383F8(on);
        func_038450(on);
        func_0384F8(on);
    }
    func_066020(a, on);
}
