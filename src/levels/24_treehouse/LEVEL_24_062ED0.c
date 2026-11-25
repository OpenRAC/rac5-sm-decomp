/* LEVEL_24:0x062ED0 -- placement copy of LEVEL_01_069880.c: placement copy of LEVEL_16_05C288.c: toggles state flags on an actor and notifies subsystems. */
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

extern char D_00201040[];
extern int func_031B30(void *p);
extern void func_034FC0(int a);
extern void func_035018(int a);
extern void func_0350C0(int a);
extern void func_062A70(Actor *a, long b);

void func_062ED0(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_031B30(D_00201040) & 0xFF) == 0) {
        func_034FC0(on);
        func_035018(on);
        func_0350C0(on);
    }
    func_062A70(a, on);
}
