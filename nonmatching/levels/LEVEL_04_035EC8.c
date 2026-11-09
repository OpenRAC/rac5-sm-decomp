/* LEVEL_04.REL:0x035EC8: reviewed 72-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_034880.c: spreads the arguments over the record
 * and opens the sub record at 0x10; the tail of the body is the two-word
 * comparator.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_035C18 returning void with (pointer, int, int), but the
 * accepted LEVEL_04_035C18.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int i0;
    int i4;
    char pad0[0x80 - 0x8];
    float f80;
} Rec;

extern void func_035C18(void *, int, int);

void func_035EC8(Rec *a0, int a1, int a2, int a3, int a4, int a5, float f12)
{
    a0->i4 = a4;
    a0->f80 = f12;
    a0->i0 = a5;
    func_035C18((char *)a0 + 0x10, a2, a3);
}

int func_035F00(int *a0, int *a1)
{
    return *a0 - *a1;
}
