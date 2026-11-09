/* LEVEL_01.REL:0x0254F0: reviewed 76-byte candidate, held for ABI review.
 * Formats a message with the value and posts it.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this and 5
 * other USA placements, but the prototypes disagree.
 * It defines the function returning void with (int), but the accepted caller
 * LEVEL_01_025540.c declares it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0020CA40[];
extern char D_0020CA50[];
extern int snprintf(char *, unsigned int, const char *, ...);
extern void func_029788(char *, int, int, int);

void func_0254F0(int value)
{
    char buf[256];

    snprintf(buf, sizeof(buf), D_0020CA40, D_0020CA50, value);
    buf[255] = 0;
    func_029788(buf, 1, 0, 0);
}
