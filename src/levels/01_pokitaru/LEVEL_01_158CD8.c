/* LEVEL_01:0x158CD8 -- runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_01A140(char *a0);
extern void func_01A180(char *a0);
extern void func_01A210(char *a0, float f0);
extern void func_01A240(int a0);
extern void func_01A250(float f0);
extern void func_01A260(char *a0);
extern char D_00217E68[];

void func_158CD8(Obj *o)
{
    Wrap *w = o->link;

    func_01A140((char *)o + 0x30);
    func_01A180((char *)o);
    func_01A210(D_00217E68, 0.0f);
    func_01A240(1);
    func_01A250(2.0f);
    func_01A260((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
