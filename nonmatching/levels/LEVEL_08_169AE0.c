/* LEVEL_08.REL:0x169AE0: reviewed 128-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_161BE8.c.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_084F78 returning void with (int, int, int), but the
 * accepted LEVEL_08_084F78.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
/* LEVEL_02:161BE8 -- clears two words of the object, copies the three floats
   of D_00261AF8 into 0x30, then the next routine runs the two panels. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V3;

extern V3 D_00261AF8;

void func_084F78(int a0, int a1, int a2);
void func_037A48(int a0);

void func_169AE0(int a0)
{
    V3 *d = (V3 *)(a0 + 0x30);

    *(int *)(a0 + 0x3C) = 0;
    *(int *)(a0 + 0x40) = 0;
    d->f_00 = D_00261AF8.f_00;
    d->f_04 = D_00261AF8.f_04;
    d->f_08 = D_00261AF8.f_08;
}

void func_169B10(int a0)
{
    int *p = *(int **)(a0 + 0x58);

    func_084F78(a0, (int)p + 0x48, 3);
    func_084F78(a0, (int)p + 0x54, 4);
    func_037A48(*(int *)((int)p + 0x64));
}
