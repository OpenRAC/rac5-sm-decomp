/* LEVEL_01.REL:0x13A298: reviewed 140-byte candidate, held for ABI review.
 * Clears a flag bit in a record, then either runs one helper or stores a value
 * into a sub-record and runs two more helpers.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_13A288 returning int with no arguments, but the accepted
 * LEVEL_01_13A288.c defines it returning int with (pointer).
 * It declares func_13A340 returning int with no arguments, but the accepted
 * LEVEL_01_13A340.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_13A288();
extern void func_13A5B0();
extern void func_123BA8();
extern int func_13A340();

void func_13A298(char *a0, int a1)
{
    int *flags;
    int v;
    char *sub;

    int mask = -0x21;

    flags = (int *)(a0 + 0x64);
    *flags = *flags & mask;
    v = func_13A288(a0);
    if (v != 0) {
        func_13A5B0(a0, 0xE, 1);
    } else {
        sub = *(char **)(a0 + 0x58);
        *(int *)(sub + 0x74) = a1;
        if (a1 != 0) {
            func_123BA8(sub + 0x78, a1);
        }
        v = func_13A340(a0);
        func_13A5B0(a0, v & 0xFF, 1);
    }
}
