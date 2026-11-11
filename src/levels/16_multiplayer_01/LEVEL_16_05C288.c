/* LEVEL_16:0x05C288 -- toggles state flags on an actor and notifies subsystems. */
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

extern char D_001E4090[];
extern int func_034DC0(void *p);
extern void func_037EB8(int a);
extern void func_037F10(int a);
extern void func_037FA0(int a);
extern void func_05BE28(Actor *a, int b);

void func_05C288(Actor *a, int on)
{
    a->flags = (a->flags & ~0x10ULL) | ((u64)((on ^ 1) & 1) << 4);
    if (on) {
        a->state &= ~(1ULL << 50);
        a->link->v = a->id;
    } else {
        a->state |= (1ULL << 50);
        a->link->v = 0xFFFF;
    }
    if ((func_034DC0(D_001E4090) & 0xFF) == 0) {
        func_037EB8(on);
        func_037F10(on);
        func_037FA0(on);
    }
    func_05BE28(a, on);
}
