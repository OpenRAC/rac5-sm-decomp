/* LEVEL_24:0x14CDB8 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_018888(char *a0);
extern void func_0188C8(char *a0);
extern void func_018958(char *a0, float f0);
extern void func_018988(int a0);
extern void func_018998(float f0);
extern void func_0189A8(char *a0);
extern char D_001E8BE8[];

void func_14CDB8(Obj *o)
{
    Wrap *w = o->link;

    func_018888((char *)o + 0x30);
    func_0188C8((char *)o);
    func_018958(D_001E8BE8, 0.0f);
    func_018988(1);
    func_018998(2.0f);
    func_0189A8((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
