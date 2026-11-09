/* LEVEL_08.REL:0x0900B8: reviewed 120-byte candidate, held for ABI review.
 * When a helper returns nonzero, stores two byte arguments into a global
 * record and stores two helper float results into it.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0901A8 returning int with (int, int, int), but the accepted
 * LEVEL_08_0901A8.c defines it returning int with (int).
 * It declares func_0901C8 returning float with (int), but the accepted
 * LEVEL_08_0901C8.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_0901A8(int a0, int a1, int a2);
extern float func_0901C8(int a0);
extern char *D_0023F11C;

void func_0900B8(int a0, int a1, int a2)
{
    if (func_0901A8(a0, a1, a2) == 0) {
        return;
    }
    *(unsigned char *)(D_0023F11C + 0x10C) = (unsigned char)a1;
    *(unsigned char *)(D_0023F11C + 0x10D) = (unsigned char)a2;
    *(float *)(D_0023F11C + 0x134) = func_0901C8(*(unsigned char *)(D_0023F11C + 0x10C));
    *(float *)(D_0023F11C + 0x138) = func_0901C8(*(unsigned char *)(D_0023F11C + 0x10D));
}
