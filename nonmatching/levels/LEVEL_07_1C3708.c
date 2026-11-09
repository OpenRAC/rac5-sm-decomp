/* LEVEL_07.REL:0x1C3708: reviewed 160-byte candidate, held for ABI review.
 * When the flag at 0xAB is clear, requests mode 0x0B; the next function clears
 * a pending latch.
 * pinned C with gnu-ee-trial links 160/160 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_07F200 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_07_07F200.c defines it returning void with (long long, long
 * long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_1C2FF8(void *a, int b);
void func_07F200(void *a, void *b, int c);
void func_1DC258(void *a, void *b);

void func_1C3708(char *a0)
{
    if (*(unsigned char *)(*(char **)(a0 + 0x58) + 0xAB) == 0) {
        func_1C2FF8(a0, 0xB);
    }
}

void func_1C3738(char *a0)
{
    char *s1;
    char *s0;

    s1 = *(char **)(a0 + 0x58);
    if (*(unsigned char *)(s1 + 0xAC) != 0) {
        if (*(unsigned char *)(s1 + 0xAB) != 0) {
            s0 = s1 + 0x4C;
            func_07F200(a0, s0, 2);
            *(unsigned char *)(s1 + 0xAD) = 1;
            func_1DC258(a0, s0);
        }
        *(unsigned char *)(s1 + 0xAC) = 0;
    }
}
