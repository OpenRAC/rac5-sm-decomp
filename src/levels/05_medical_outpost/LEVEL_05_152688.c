/* LEVEL_05:0x152688 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_019780(char *a0);
extern void func_0197C0(char *a0);
extern void func_019850(char *a0, float f0);
extern void func_019880(int a0);
extern void func_019890(float f0);
extern void func_0198A0(char *a0);
extern char D_00206D68[];

void func_152688(Obj *o)
{
    Wrap *w = o->link;

    func_019780((char *)o + 0x30);
    func_0197C0((char *)o);
    func_019850(D_00206D68, 0.0f);
    func_019880(1);
    func_019890(2.0f);
    func_0198A0((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
