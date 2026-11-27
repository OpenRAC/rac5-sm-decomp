/* LEVEL_23:0x155080 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_018DA8(char *a0);
extern void func_018DE8(char *a0);
extern void func_018E78(char *a0, float f0);
extern void func_018EA8(int a0);
extern void func_018EB8(float f0);
extern void func_018EC8(char *a0);
extern char D_001EAFE8[];

void func_155080(Obj *o)
{
    Wrap *w = o->link;

    func_018DA8((char *)o + 0x30);
    func_018DE8((char *)o);
    func_018E78(D_001EAFE8, 0.0f);
    func_018EA8(1);
    func_018EB8(2.0f);
    func_018EC8((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
