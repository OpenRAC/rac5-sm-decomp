/* LEVEL_19:0x05B6E8 -- placement copy of LEVEL_16_05C288.c: toggles state flags on an actor and notifies subsystems. */
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

extern char D_001E4210[];
extern int func_034150(void *p);
extern void func_037198(int a);
extern void func_0371F0(int a);
extern void func_037280(int a);
extern void func_05B288(Actor *a, int b);

void func_05B6E8(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_034150(D_001E4210) & 0xFF) == 0) {
        func_037198(on);
        func_0371F0(on);
        func_037280(on);
    }
    func_05B288(a, on);
}
