/* LEVEL_23.REL:0x1869B8: reviewed 112-byte candidate, held for ABI review.
 * Queries a record through two helpers, then runs a status check with a fixed
 * follow-up call.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0AC270 returning void with (int, int, int, int), but the
 * accepted LEVEL_23_0AC270.c defines it returning void with (pointer, pointer,
 * pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int f_00;
} Rec;

typedef struct {
    char pad_00[0x54];
    Rec *f_54;
} Obj;

extern int func_018F18();
extern int func_07AF58(int a0, int a1);
extern int func_123C28(int a0);
extern void func_0AC270(int a0, int a1, int a2, int a3);
extern int func_07DE48(int a0);
extern void func_0193B8(int a0, int a1);

void func_1869B8(Obj *a0)
{
    Rec *s0;
    int v;
    int w;

    s0 = a0->f_54;
    v = func_018F18();
    if (func_07AF58(s0->f_00, v) == 0) {
        return;
    }
    w = func_123C28(0x2F3);
    func_0AC270(0, w, 0, 0);
    if ((func_07DE48(2) & 0x1000) != 0) {
        func_0193B8(5, 1);
    }
}
