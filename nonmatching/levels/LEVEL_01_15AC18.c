/* LEVEL_01.REL:0x15AC18: reviewed 164-byte candidate, held for ABI review.
 * Decrements a counter in a sub-record, runs two helpers and calls a third
 * helper with a code chosen by flags.
 * pinned C with gnu-ee-trial links 164/164 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_01A2A0 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_01A2A0.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_01A2A0(void *a0, void *a1);
extern int func_15C8F0(char *a0);
extern int func_084708(void *a0, void *a1);
extern void func_15C260(char *a0, unsigned int a1, int a2);

void func_15AC18(char *a0, void *a1)
{
    char *s0;
    char *s1;
    char *s2;
    int buf[4];
    int r;

    s0 = a0;
    s1 = *(char **)(a0 + 0x58);
    s2 = *(char **)(a0 + 0x54);
    *(int *)(s1 + 0x60) = *(int *)(s1 + 0x60) - 1;
    func_01A2A0(buf, a1);
    r = func_15C8F0(s0);
    if (r != 0) {
        func_15C260(s0, *(unsigned char *)(s0 + 0x45), 0xB);
    } else if (*(int *)(s1 + 0x60) <= 0) {
        r = func_084708(*(void **)(s2 + 0x2C), s0 + 0x30);
        if (r != 0) {
            func_15C260(s0, *(unsigned char *)(s0 + 0x45), 0x11);
        } else {
            func_15C260(s0, *(unsigned char *)(s0 + 0x45), 0xF);
        }
    }
}
