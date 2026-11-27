/* USA LEVEL_01:0A6C58, 144-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 144 bytes: 18 differing words; first difference +0x28. No matching credit.
 * Remaining issue: branch layout: retail keeps the not-found return 0 inline after the call
 * (bnez over b-to-epilogue) and returns the table base already in v0; ours cross-jumps the three
 * return-0 blocks into one (beqz to a shared block) and builds the address in other registers;
 * early-return / if-chain / 2D array / struct table forms and jump flags (-fexceptions, -fno-
 * thread-jumps, cse flags) tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0A6C58 -- looks up a table entry by slot and channel, returns its base or an indexed word. */
typedef unsigned int u32;
extern int func_0A69A0(int);
extern char D_001F7060[];

u32 func_0A6C58(int index, int slot, int channel)
{
    char *entry;
    u32 r;
    if (!func_0A69A0(slot))
        r = 0;
    else if ((entry = *(char **)(D_001F7060 + (slot * 12 + channel * 4))) == 0)
        r = (u32)D_001F7060;
    else if (index >= 3)
        r = 0;
    else if (index < 0)
        r = 0;
    else
        r = *(u32 *)(entry + 4) + index;
    return r;
}