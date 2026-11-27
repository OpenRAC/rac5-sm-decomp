/* LEVEL_02:0x167798 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_01AB40(char *a0);
extern void func_01AB80(char *a0);
extern void func_01AC10(char *a0, float f0);
extern void func_01AC40(int a0);
extern void func_01AC50(float f0);
extern void func_01AC60(char *a0);
extern char D_0022CDE8[];

void func_167798(Obj *o)
{
    Wrap *w = o->link;

    func_01AB40((char *)o + 0x30);
    func_01AB80((char *)o);
    func_01AC10(D_0022CDE8, 0.0f);
    func_01AC40(1);
    func_01AC50(2.0f);
    func_01AC60((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
