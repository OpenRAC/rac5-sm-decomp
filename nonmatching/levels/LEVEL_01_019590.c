/* LEVEL_01.REL:0x019590: reviewed 136-byte candidate, held for ABI review.
 * When a pending amount is set, folds it into a counter, clears both pending
 * words, and clamps the counter.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 6 other USA placements, but the prototypes disagree.
 * It declares func_0B7050 returning void with (int), but the accepted
 * LEVEL_01_0B7050.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0B7050(int a);
extern unsigned char D_0022F884[];
extern unsigned char D_0022F880[];
extern unsigned char D_001F3FAC[];

void func_019590(void)
{
    unsigned int a1;
    unsigned int v1;
    unsigned char *p;
    unsigned char *q;
    unsigned int cnt;

    v1 = *(unsigned int *)D_0022F884;
    a1 = *(unsigned int *)D_0022F880;
    if (v1 < a1) {
        p = *(unsigned char **)D_001F3FAC;
        cnt = *(unsigned int *)(p + 0x1C68);
        cnt = cnt + (a1 - v1);
        *(unsigned int *)(p + 0x1C68) = cnt;
        func_0B7050(0x5A);
    }
    *(unsigned int *)D_0022F884 = 0;
    *(unsigned int *)D_0022F880 = 0;
    q = *(unsigned char **)D_001F3FAC;
    if (*(unsigned int *)(q + 0x1C68) > 0x05F5E0FF) {
        *(unsigned int *)(q + 0x1C68) = 0x05F5E0FF;
    }
}
