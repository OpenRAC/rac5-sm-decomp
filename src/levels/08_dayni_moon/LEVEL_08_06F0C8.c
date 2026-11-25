/* LEVEL_08:0x06F0C8 -- placement copy of LEVEL_01_069880.c: placement copy of LEVEL_16_05C288.c: toggles state flags on an actor and notifies subsystems. */
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

extern char D_002843D0[];
extern int func_03DB08(void *p);
extern void func_041020(int a);
extern void func_041078(int a);
extern void func_041120(int a);
extern void func_06EC68(Actor *a, long b);

void func_06F0C8(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_03DB08(D_002843D0) & 0xFF) == 0) {
        func_041020(on);
        func_041078(on);
        func_041120(on);
    }
    func_06EC68(a, on);
}
