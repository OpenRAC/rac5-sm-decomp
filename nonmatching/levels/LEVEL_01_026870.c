/* LEVEL_01.REL:0x026870: reviewed 196-byte candidate, held for ABI review.
 * LEVEL_01:0x26870 -- records two state words, formats a label into a shared
 * buffer and forwards the remaining arguments to a local dispatcher.
 * pinned C with gnu-ee-trial links 196/196 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_026768 returning void with (pointer, int, int, int, int,
 * int, int), but the accepted LEVEL_01_026768.c defines it returning void with
 * (long long, long long, long long, long long, long long, long long, long
 * long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int D_001F3EDC;
extern unsigned int D_001F3ED8;
extern char D_0022FE60[];
extern char D_0020CAD8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_026768(char *a, int b, int c, int d, int e, int f, int g);

void func_026870(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001F3ED8 = a1;
    D_001F3EDC = a0;
    sprintf(D_0022FE60, D_0020CAD8, a0, a0, (char)(a1 + 0x41));
    func_026768(D_0022FE60, a2, a3, t0, t1, t2, t3);
}
