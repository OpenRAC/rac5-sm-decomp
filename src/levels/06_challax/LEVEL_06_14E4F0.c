/* LEVEL_06:0x14E4F0 -- placement copy of LEVEL_01_158CD8.c: runs a fixed sequence of helper calls on one object, then clears one flag bit in the 64-bit field of its linked record. */
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

extern void func_0189F0(char *a0);
extern void func_018A30(char *a0);
extern void func_018AC0(char *a0, float f0);
extern void func_018AF0(int a0);
extern void func_018B00(float f0);
extern void func_018B10(char *a0);
extern char D_00206CE8[];

void func_14E4F0(Obj *o)
{
    Wrap *w = o->link;

    func_0189F0((char *)o + 0x30);
    func_018A30((char *)o);
    func_018AC0(D_00206CE8, 0.0f);
    func_018AF0(1);
    func_018B00(2.0f);
    func_018B10((char *)o);
    w->link->flags &= ~(1ULL << 42);
}
