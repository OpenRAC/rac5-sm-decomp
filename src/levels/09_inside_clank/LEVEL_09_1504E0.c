/* LEVEL_09:0x1504E0 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_0195B0(char *a0);
extern void func_0195F0(char *a0);
extern void func_019680(char *a0, float f0);
extern void func_0196B0(int a0);
extern void func_0196C0(float f0);
extern void func_0196D0(char *a0);
extern char D_00201A68[];

void func_1504E0(Obj *o)
{
    Wrap *w = o->link;

    func_0195B0((char *)o + 0x30);
    func_0195F0((char *)o);
    func_019680(D_00201A68, 0.0f);
    func_0196B0(1);
    func_0196C0(2.0f);
    func_0196D0((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
