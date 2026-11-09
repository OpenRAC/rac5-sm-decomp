/* LEVEL_01.REL:0x0F0390: reviewed 156-byte candidate, held for ABI review.
 * Resolves three handles, derives a flag and stores the results.
 * pinned C with gnu-ee-trial links 156/156 bytes and is byte-exact at this and
 * 13 other USA placements, but the prototypes disagree.
 * It declares func_09FB18 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * It declares func_0E6188 returning int with (int), but the accepted
 * LEVEL_01_0E6188.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_00216890[];
extern void func_09FB18(void *a, void *b);
extern int func_0E6188(int a);
extern int func_0FCB00(int a);
extern int func_0FB1E0(int a);
extern int func_0FE850(int a);
extern void func_0F0210(void *a, int b);

void func_0F0390(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_09FB18(a0, D_00216890);
    a0->f1C = func_0E6188(a2->f00);
    a0->f20 = func_0FCB00(a2->f04);
    a0->f24 = func_0FB1E0(a2->f08);
    if (a2->f0C != 0) {
        v = func_0FE850(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_0F0210(a1, ~v != 0);
    a0->f2C = a1;
}
