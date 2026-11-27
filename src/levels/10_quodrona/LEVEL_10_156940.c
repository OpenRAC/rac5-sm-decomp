/* LEVEL_10:0x156940 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_0197D8(char *a0);
extern void func_019818(char *a0);
extern void func_0198A8(char *a0, float f0);
extern void func_0198D8(int a0);
extern void func_0198E8(float f0);
extern void func_0198F8(char *a0);
extern char D_00220DE8[];

void func_156940(Obj *o)
{
    Wrap *w = o->link;

    func_0197D8((char *)o + 0x30);
    func_019818((char *)o);
    func_0198A8(D_00220DE8, 0.0f);
    func_0198D8(1);
    func_0198E8(2.0f);
    func_0198F8((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
