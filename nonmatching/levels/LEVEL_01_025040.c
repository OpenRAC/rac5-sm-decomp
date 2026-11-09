/* LEVEL_01.REL:0x025040: reviewed 88-byte candidate, held for ABI review.
 * Checks an index against a limit, then tests three fields of a looked-up
 * record.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and
 * 13 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[0x38];
    int f_38;
    int f_3C;
    int f_40;
} Rec;

extern Rec *func_024670(unsigned int a0, int a1);

int func_025040(unsigned int a0)
{
    Rec *r;

    if (a0 < 0x19) {
        r = func_024670(a0, -1);
        if (r->f_38 == 0 || r->f_40 == 0 || r->f_3C == 0) {
            return 0;
        }
    }
    return 1;
}
