/* LEVEL_18:0x05AD90 -- placement copy of LEVEL_16_05C288.c: toggles state flags on an actor and notifies subsystems. */
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

extern char D_001E4410[];
extern int func_033690(void *p);
extern void func_036748(int a);
extern void func_0367A0(int a);
extern void func_036830(int a);
extern void func_05A930(Actor *a, int b);

void func_05AD90(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_033690(D_001E4410) & 0xFF) == 0) {
        func_036748(on);
        func_0367A0(on);
        func_036830(on);
    }
    func_05A930(a, on);
}
