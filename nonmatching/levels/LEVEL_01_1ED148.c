/* USA LEVEL_01:1ED148, 228-byte candidate; measured 26 November 2026.
 * Profile sdk991111, assembler gnu-ee-trial; options: default.
 * Compiled 228 bytes: 2 differing words; first difference +0x20. No matching credit.
 * Remaining issue: branch target: sdk991111 (16-byte save slots) + inline FindBlock(addr) loop
 * (continue when below start, break when below end) + binary search give every word but one
 * branch (38 -> 2 words); retail threads the loop-top b == 0 exit straight to the final return 0
 * (v0 = 0 in the delay slot) while keeping the b != 0 re-test on the break path, ours jumps to
 * the re-test (nop slot); 14 loop/exit/helper forms and -fexceptions measured
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x1ED148 -- finds the registered block whose address range holds the given address (preparing blocks that are not initialised yet), then binary-searches that block's sorted entry table for the entry containing it; returns the entry or 0. */
typedef struct Ent {
    char pad_00[8];
    unsigned int start_08;
    unsigned int size_0C;
} Ent;

typedef struct Blk {
    unsigned int start_00;
    unsigned int end_04;
    char pad_08[4];
    Ent **ents_0C;
    unsigned int count_10;
    struct Blk *next_14;
} Blk;

extern Blk *D_00398F50;
extern void func_1ED008(Blk *b);

static __inline__ Blk *FindBlock(unsigned int addr)
{
    Blk *b;

    for (b = D_00398F50; b != 0; b = b->next_14) {
        if (b->start_00 == 0)
            func_1ED008(b);
        if (addr < b->start_00)
            continue;
        if (addr < b->end_04)
            break;
    }
    return b;
}

Ent *func_1ED148(unsigned int addr)
{
    Blk *b;
    Ent *e;
    unsigned int lo;
    unsigned int hi;
    unsigned int mid;

    b = FindBlock(addr);
    if (b == 0)
        return 0;
    lo = 0;
    hi = b->count_10;
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        e = b->ents_0C[mid];
        if (addr < e->start_08)
            hi = mid;
        else if (addr < e->start_08 + e->size_0C)
            return e;
        else
            lo = mid + 1;
    }
    return 0;
}
