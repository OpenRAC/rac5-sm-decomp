/* LEVEL_16.REL:0x160DC0: reviewed 124-byte candidate, held for ABI review.
 * Visits two slots, calling a check then an action on the first match.
 * pinned C with gnu-ee-trial links 124/124 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_160F00 returning void with (pointer, pointer), but the
 * accepted LEVEL_16_160F00.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void *func_112CE8(int i);
int func_160E40(char *a, void *b);
void func_160F00(char *a, void *b);

int func_160DC0(char *a0)
{
    unsigned int s1;
    void *s0;

    for (s1 = 0; s1 < 2; s1++) {
        s0 = func_112CE8(s1);
        if (s0 != 0) {
            if (func_160E40(a0, s0) != 0) {
                func_160F00(a0, s0);
                return 1;
            }
        }
    }
    return 0;
}
