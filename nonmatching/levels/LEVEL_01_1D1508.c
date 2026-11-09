/* LEVEL_01.REL:0x1D1508: reviewed 108-byte candidate, held for ABI review.
 * Walks a 0x68-byte record array with a helper, clears one flag byte, and runs
 * a final helper.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * It declares func_06E400 returning void with (pointer), but the accepted
 * LEVEL_01_06E400.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1D1228(void);
extern void func_06E400(struct Rec *a0);
extern void func_1D1578(void);
extern struct Rec D_00398920[];

void func_1D1508(void)
{
    unsigned int i;

    if (func_1D1228() != 0) {
        for (i = 0; i < 3; i++) {
            func_06E400(&D_00398920[i]);
        }
        D_00398920[3].b00 = 0;
    }
    func_1D1578();
}
