/* LEVEL_15.REL:0x0FE1E8: reviewed 116-byte candidate, held for ABI review.
 * Steps through two arrays of 0x60-byte entries, calling a per-entry helper,
 * then calls a finisher.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_120470 returning void with (pointer), but the accepted
 * LEVEL_15_02C060.c defines it returning void with no arguments.
 * It declares func_0FCAC0 returning void with (pointer), but the accepted
 * LEVEL_15_02C060.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002ECDD8[];
extern char D_002ECE98[];

void func_120470(char *p);
void func_0FCAC0(char *p);
void func_0FE340(void);

void func_0FE1E8(void)
{
    char *p;
    char *end;

    p = D_002ECDD8;
    end = p + 0xC0;
    do {
        func_120470(p);
        p += 0x60;
    } while (p < end);
    p = D_002ECE98;
    end = p;
    do {
        func_0FCAC0(p);
        p += 0x60;
    } while (p == end);
    func_0FE340();
}
