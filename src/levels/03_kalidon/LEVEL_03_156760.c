/* LEVEL_03:0x156760 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_019F50(char *a0);
extern void func_019F90(char *a0);
extern void func_01A020(char *a0, float f0);
extern void func_01A050(int a0);
extern void func_01A060(float f0);
extern void func_01A070(char *a0);
extern char D_00230D68[];

void func_156760(Obj *o)
{
    Wrap *w = o->link;

    func_019F50((char *)o + 0x30);
    func_019F90((char *)o);
    func_01A020(D_00230D68, 0.0f);
    func_01A050(1);
    func_01A060(2.0f);
    func_01A070((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
