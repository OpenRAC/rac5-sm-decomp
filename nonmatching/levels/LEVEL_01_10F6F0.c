/* USA LEVEL_01:10F6F0, 140-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 140 bytes: 13 differing words; first difference +0x38. No matching credit.
 * Remaining issue: register allocation only: in-place start = cursor - 1; start += align; start
 * &= -align now gives the retail instruction sequence (14 -> 13 words); retail keeps cursor a1 /
 * -align v1 / count v0, ours cursor v0 / -align a1 / count v1; 90 statement orders x 3 remaining
 * forms, cursor/count/mask/used locals, all profiles and sched flags unchanged
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x10F6F0 -- carves an aligned block of the given size out of the shared arena (when it fits), updates the arena bookkeeping, notifies the helper and returns the block address or 0. */
typedef struct Arena {
    char pad_00[8];
    unsigned int cursor;
    unsigned int last;
    unsigned int remaining;
    char pad_14[4];
    int count;
} Arena;

extern Arena D_00331738;
extern void func_10F630(int arg);

unsigned int func_10F6F0(unsigned int align, unsigned int size, int arg)
{
    Arena *a = &D_00331738;
    unsigned int remaining = a->remaining;
    unsigned int cursor;
    unsigned int start;

    if (size + align < remaining) {
        cursor = a->cursor;
        start = cursor - 1;
        start += align;
        start &= -align;
        a->count = a->count + 1;
        a->cursor = start + size;
        a->last = start;
        a->remaining = remaining - (start - cursor + size);
        func_10F630(arg);
        return start;
    }
    return 0;
}
