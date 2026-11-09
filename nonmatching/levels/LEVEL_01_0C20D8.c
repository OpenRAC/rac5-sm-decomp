/* LEVEL_01.REL:0x0C20D8: reviewed 216-byte candidate, held for ABI review.
 * Resolves the current table entry and updates the stored pair.
 * pinned C with gnu-ee-trial links 216/216 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_001FEE58;
extern int D_001FEE5C;
extern int D_001FEE68;
extern int *D_001FEEC8[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001FEEE8;
extern W D_001FEEEC;
extern int D_00329008;
extern int func_024EC8(int x, int y);
extern Pr *func_024670(int x, int y);
extern int func_0C0EB8(int a, int b);

void func_0C20D8(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001FEEC8[D_001FEE5C][D_001FEE58];
    if (x == 0 || func_024EC8(x, -1) == 0) {
        D_001FEEE8.v = 0;
        D_001FEEEC.v = 0;
    } else if (x != D_001FEE68) {
        p = func_024670(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001FEEE8.v = p->a;
                D_001FEEEC.v = p->b;
            }
            if (func_0C0EB8(D_001FEEE8.v, D_001FEEEC.v) == 0)
                D_00329008 = 0;
        }
    }
}
