/* LEVEL_05:0x0674E8 -- placement copy of LEVEL_01_069880.c: placement copy of LEVEL_16_05C288.c: toggles state flags on an actor and notifies subsystems. */
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

extern char D_00220E40[];
extern int func_036748(void *p);
extern void func_039B18(int a);
extern void func_039B70(int a);
extern void func_039C18(int a);
extern void func_067088(Actor *a, long b);

void func_0674E8(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_036748(D_00220E40) & 0xFF) == 0) {
        func_039B18(on);
        func_039B70(on);
        func_039C18(on);
    }
    func_067088(a, on);
}
