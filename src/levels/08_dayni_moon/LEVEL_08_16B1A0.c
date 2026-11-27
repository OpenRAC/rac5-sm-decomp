/* LEVEL_08:0x16B1A0 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_01AB30(char *a0);
extern void func_01AB70(char *a0);
extern void func_01AC00(char *a0, float f0);
extern void func_01AC30(int a0);
extern void func_01AC40(float f0);
extern void func_01AC50(char *a0);
extern char D_00261AE8[];

void func_16B1A0(Obj *o)
{
    Wrap *w = o->link;

    func_01AB30((char *)o + 0x30);
    func_01AB70((char *)o);
    func_01AC00(D_00261AE8, 0.0f);
    func_01AC30(1);
    func_01AC40(2.0f);
    func_01AC50((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
