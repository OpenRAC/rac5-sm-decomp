/* USA LEVEL_01.REL:0x158CD8, 140-byte candidate (14 November 2026).
 * Measured pinned --as: 1 differing words; first difference at +0x8C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
