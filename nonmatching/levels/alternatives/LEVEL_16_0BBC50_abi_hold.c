/* LEVEL_16.REL:0x0BBC50: reviewed 80-byte candidate, held for ABI review.
 * Calls two helpers, stores one result, then calls a sink.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It declares func_0956C0 returning int with (int), but the accepted
 * FRONTEND_0025B0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_0956C0(int a0);
extern void func_0BBCD0(void);
extern void func_110B48(int a0, char *a1, int a2);
extern int D_001AFAEC;
extern char D_001C8F38[];

void func_0BBC50(void)
{
    int saved;

    saved = func_0956C0(0);
    D_001AFAEC = func_0956C0(1);
    func_0BBCD0();
    func_110B48(0, D_001C8F38, saved);
}
