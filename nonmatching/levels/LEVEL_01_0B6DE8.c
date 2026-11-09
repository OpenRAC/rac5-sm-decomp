/* LEVEL_01.REL:0x0B6DE8: reviewed 124-byte candidate, held for ABI review.
 * Runs six per-index helpers in sequence, using a pointer loaded from a
 * global.
 * pinned C with gnu-ee-trial links 124/124 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void *D_001F3FAC;

void func_0B6B90(int i);
void func_0B69D0(int i);
void func_0B70B8(int i, int v);
void func_0B7500(int i);
void func_0B7880(int i);
void func_0B7FA8(int i);
void func_0B8E68(int i);
void func_0B6D80(int i);

void func_0B6DE8(void)
{
    int i;

    i = 0;
    do {
        func_0B6B90(i);
        func_0B69D0(i);
        func_0B70B8(i, *(int *)((char *)D_001F3FAC + 0x1C68));
        func_0B7500(i);
        func_0B7880(i);
        func_0B7FA8(i);
        func_0B8E68(i);
        func_0B6D80(i);
        i = i + 1;
    } while (i == 0);
}
