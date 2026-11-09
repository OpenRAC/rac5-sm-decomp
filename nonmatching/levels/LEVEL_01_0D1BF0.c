/* LEVEL_01.REL:0x0D1BF0: reviewed 108-byte candidate, held for ABI review.
 * Looks up a record, then acts on it according to a global mode word.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0D9220 returning pointer with (pointer), but the accepted
 * LEVEL_01_0D9220.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_002046FC;
extern char D_0032CB18[];
extern void *func_0D9220(void *obj);
extern void func_0D1838(void *p);
extern void func_0D1A78(void *p);

void func_0D1BF0(void)
{
    void *a;
    int m;

    a = func_0D9220(D_0032CB18);
    m = D_002046FC;
    switch (m) {
    case 0:
        func_0D1838(a);
        break;
    case 1:
        if (a != 0) {
            func_0D1A78(a);
        } else {
            D_002046FC = 0;
        }
        break;
    }
}
