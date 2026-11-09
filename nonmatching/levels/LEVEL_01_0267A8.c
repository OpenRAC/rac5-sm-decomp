/* LEVEL_01.REL:0x0267A8: reviewed 200-byte candidate, held for ABI review.
 * Stores two globals, formats a status string into a fixed buffer using a byte
 * derived from the first argument, then forwards all arguments to a second
 * routine.
 * pinned C with gnu-ee-trial links 200/200 bytes and is byte-exact at this and
 * 10 other USA placements, but the prototypes disagree.
 * It declares func_026768 returning void with (pointer, int, int, int, int,
 * int, int), but the accepted LEVEL_01_026768.c defines it returning void with
 * (long long, long long, long long, long long, long long, long long, long
 * long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0021A7F0;
extern int D_001F3ED8;
extern int D_001F3EDC;
extern char D_0022FE60[];
extern char D_0020CAD8[];

int sprintf(char *buf, const char *fmt, ...);
void func_026768(char *a0, int a1, int a2, int a3, int a4, int a5, int a6);

void func_0267A8(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_0021A7F0;
    D_001F3ED8 = a0;
    D_001F3EDC = t;
    sprintf(D_0022FE60, D_0020CAD8, t, t, (signed char)(a0 + 0x41));
    func_026768(D_0022FE60, a1, a2, a3, a4, a5, a6);
}
