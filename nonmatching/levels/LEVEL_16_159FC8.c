/* USA LEVEL_16.REL:0x159FC8, 272-byte candidate (21 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x54.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Actor Actor;

typedef struct {
    char pad0[0x18];
    unsigned int flags;
    Actor *target;
} Rec;

typedef struct {
    char pad0[0x58];
    Rec *rec;
} Obj;

struct Actor {
    char pad0[0xF4];
    int f4;
};

extern int D_001D04A0;
extern char D_001D4F40[];
extern Actor *func_112CE8(unsigned int i);
extern int func_15A0D8(Obj *o, Actor *a);
extern void func_037458(float f, Actor *a, int b, int c, void *pos, int d, Obj *o);
extern int func_0A1F18(int a, int b);
extern void func_0A2180(unsigned int mode, void *first, int second, void *third);

void func_159FC8(Obj *o)
{
    unsigned int i;
    Actor *a;
    int mode;
    Rec *r;

    for (i = 0; i < 2;) {
        a = func_112CE8(i);
        i++;
        if (a != 0 && func_15A0D8(o, a) != 0) {
            func_037458(0.0f, a, 2, 1, (char *)o + 0x30, 0, o);
            mode = D_001D04A0;
            if (mode == 16) {
                r = o->rec;
                r->target = a;
                r->flags = r->flags | 1;
            }
            if (mode == 17) {
                if (func_0A1F18(a->f4 - 1, -0x6A) == 0) {
                    func_0A2180(a->f4 - 1, D_001D4F40, -0x6A, (void *)-1);
                }
            }
        }
    }
}
