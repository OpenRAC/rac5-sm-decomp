/* LEVEL_07:0x15B378 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
typedef struct {
    char pad0[0x58];
    struct Wrap *link;
} Obj;

typedef struct Wrap {
    struct Link *link;
} Wrap;

typedef struct Link {
    char pad[0x960];
    unsigned long long flags;
} Link;

extern void func_01A8B0(char *a0);
extern void func_01A8F0(char *a0);
extern void func_01A980(char *a0, float f0);
extern void func_01A9B0(int a0);
extern void func_01A9C0(float f0);
extern void func_01A9D0(char *a0);
extern char D_0022CB68[];

void func_15B378(Obj *o)
{
    Wrap *w = o->link;

    func_01A8B0((char *)o + 0x30);
    func_01A8F0((char *)o);
    func_01A980(D_0022CB68, 0.0f);
    func_01A9B0(1);
    func_01A9C0(2.0f);
    func_01A9D0((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
