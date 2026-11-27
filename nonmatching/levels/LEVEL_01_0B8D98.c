/* USA LEVEL_01:0B8D98, 200-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 200 bytes: 8 differing words; first difference +0x0. No matching credit.
 * Remaining issue: register only: decision trees now identical and length 200 = retail (unsigned
 * state switch, mode switch with case 1 / case 2 and case 0 sharing the default handler); retail
 * computes the first element address into a1 (not tied to the mult result), so the saved index
 * lands in a2; ours ties it and keeps the index in a1; pointer-local / unsigned / stepped-
 * pointer variants unchanged
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0B8D98 -- for panels in state 2, 3, 5 or 8, dispatches on the panel mode word to one of three handlers. */
typedef struct Panel {
    unsigned int state;
    char pad04[0x38 - 4];
} Panel;

extern Panel D_001FC928[];
extern int D_001FC7C0[];

extern void func_0B8598(int index);
extern void func_0B89F8(int index);
extern void func_0B8020(int index);

void func_0B8D98(int index)
{
    switch (D_001FC928[index].state) {
    case 2:
    case 3:
    case 5:
    case 8:
        switch (D_001FC7C0[index]) {
        case 1:
            func_0B8598(index);
            break;
        case 2:
            func_0B89F8(index);
            break;
        case 0:
        default:
            func_0B8020(index);
            break;
        }
        break;
    }
}
