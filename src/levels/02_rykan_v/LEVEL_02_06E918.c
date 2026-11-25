/* LEVEL_02:0x06E918 -- placement copy of LEVEL_01_069880.c: placement copy of LEVEL_16_05C288.c: toggles state flags on an actor and notifies subsystems. */
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

extern char D_0024C650[];
extern int func_03D480(void *p);
extern void func_040E50(int a);
extern void func_040EA8(int a);
extern void func_040F50(int a);
extern void func_06E4B8(Actor *a, long b);

void func_06E918(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_03D480(D_0024C650) & 0xFF) == 0) {
        func_040E50(on);
        func_040EA8(on);
        func_040F50(on);
    }
    func_06E4B8(a, on);
}
