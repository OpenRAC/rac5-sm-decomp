/* LEVEL_04:0x164410 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_019E18(char *a0);
extern void func_019E58(char *a0);
extern void func_019EE8(char *a0, float f0);
extern void func_019F18(int a0);
extern void func_019F28(float f0);
extern void func_019F38(char *a0);
extern char D_002317E8[];

void func_164410(Obj *o)
{
    Wrap *w = o->link;

    func_019E18((char *)o + 0x30);
    func_019E58((char *)o);
    func_019EE8(D_002317E8, 0.0f);
    func_019F18(1);
    func_019F28(2.0f);
    func_019F38((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
