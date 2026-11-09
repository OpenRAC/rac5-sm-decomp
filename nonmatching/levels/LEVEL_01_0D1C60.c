/* LEVEL_01.REL:0x0D1C60: reviewed 296-byte candidate, held for ABI review.
 * Runs the current mode's step, then applies the selected entry when valid.
 * pinned C with gnu-ee-trial links 296/296 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0D9220 returning pointer with (pointer), but the accepted
 * LEVEL_01_0D9220.c defines it returning int with (pointer).
 * It declares func_024EA0 returning int with (int, int), but the accepted
 * LEVEL_01_024EA0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Dd {
    char pad0[0x14];
    int f14;
} Dd;
typedef struct Pn {
    char pad0[0x24];
    int f24;
} Pn;
typedef struct Q {
    char pad0[0x30];
    int *tbl[1];
} Q;
extern int D_002045DC;
extern Dd D_0032CB18;
extern void func_0D17E0(void);
extern void func_0D1BF0(void);
extern void func_0D1800(void);
extern Pn *func_0D9220(Dd *d);
extern int func_024EA0(int a, int b);
extern Q *func_024628(int a, int b);
extern int func_0DA658(Dd *d);
extern void func_134070(int a, int b);
extern void func_0D2868(void);

void func_0D1C60(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_002045DC) {
    case 0:
        break;
    case 1:
        func_0D17E0();
        break;
    case 2:
        func_0D1BF0();
        break;
    case 3:
        func_0D1800();
        break;
    }
    p = func_0D9220(&D_0032CB18);
    if (p != 0) {
        t = D_0032CB18.f14;
        s = func_024EA0(p->f24, -1);
        q = func_024628(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0DA658(&D_0032CB18) == 0)
                    func_134070(0, w);
            }
        }
    }
    func_0D2868();
}
