/* LEVEL_15.REL:0x029980: reviewed 88-byte candidate.
 * Calls a helper, then copies a 12-byte record from the argument into the
 * object and stores the float argument.
 * gnu-ee-trial C with gnu-ee-trial links 88/88 bytes; first differs at +8 (2
 * words).
 * Under gnu-ee-trial only the order of two prologue register saves differs;
 * the pinned chain differs in six words.
 * Retry: Recover the parameter or local order that fixes the save order, or
 * measure a per-source save-order profile.
 * No matching credit.
 */
typedef struct {
    int w0;
    int w1;
    int w2;
} Rec12;

extern void func_0294D8();

void func_029980(char *a0, int a1, int a2, Rec12 *a3, float f)
{
    func_0294D8();
    *(Rec12 *)(a0 + 4) = *a3;
    *(float *)(a0 + 0x10) = f;
}
