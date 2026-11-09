/* LEVEL_24.REL:0x1922A8: reviewed 112-byte candidate, held for ABI review.
 * Two calls around the four-float forward.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0E7540 returning void with (int, pointer), but the accepted
 * LEVEL_24_0E7540.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

typedef struct {
    char pad_00[0x30];
    char pad_30[1];
} Level;

extern Obj *D_362260;
extern void func_0E7540(int a, char *b);
extern void func_07B0B0(Level *l, Obj *o, int i0, int i1, int i2, int i3,
                        int i4, int i5, float f0, float f1, float f2, float f3);
extern void func_192268(Level *l);

void func_1922A8(Level *a0)
{
    Obj *p;

    func_0E7540(0x17, (char *)a0 + 0x30);
    p = D_362260;
    if (p != 0) {
        func_07B0B0(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
    func_192268(a0);
}
