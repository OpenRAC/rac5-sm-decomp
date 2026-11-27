/* USA LEVEL_08:18D2F0, 232-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 244 bytes: 30 differing words; first difference +0x4C. No matching credit.
 * Remaining issue: block layout: with the id 11 branch as if (id != 0xB) {...} else finish the
 * id 10 block stays first (41->30 words, aligned 8: 244 vs 232 B) but jump2 no longer cross-
 * jumps the second func_0845F8(o, 1) copy into it; retail redirects the id 11 path to the first
 * copy (its a0 move in the b delay slot); the original two-return form keeps the last copy
 * instead, a goto to a shared label keeps the label before the a0 move; -fexceptions no effect
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_08:0x18D2F0 -- state-change handler: for the id 10 (and after the common prelude for id 11) runs the finishing routine with flag 1; for other ids returns 1 when the object type byte (+0x45) is 0x0D/0x0E, otherwise runs the prelude, spawns the effect (0.25 scale) with the three trailing parameters, calls the follow-up with the object type and 0x0D; returns 3. */
extern void func_0845F8(char *object, int flag);
extern void func_017980(char *object, int a1, int a2, int a3);
extern void func_20A188(float a, float b, char *where, char *object, int p4, int p5, int p6);
extern void func_18D860(char *object, int type, int mode);

int func_18D2F0(char *object, int id, int unused, int p4, int p5, int p6)
{
    char *state;
    char *info;

    state = *(char **)(object + 0x58);
    info = *(char **)(object + 0x54);
    if (id == 10) {
        func_0845F8(object, 1);
        return 3;
    }
    if ((unsigned char)(*(unsigned char *)(object + 0x45) - 0xD) < 2) {
        return 1;
    }
    func_017980(object, 0, *(int *)(info + 0x2C), *(unsigned char *)(state + 0x55));
    if (id != 0xB) {
        func_20A188(0.25f, 0.25f, state + 0x24, object, p4, p5, p6);
        func_18D860(object, *(unsigned char *)(object + 0x45), 0xD);
    } else {
        func_0845F8(object, 1);
    }
    return 3;
}
