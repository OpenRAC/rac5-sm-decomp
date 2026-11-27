/* USA LEVEL_01:141B80, 188-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: -fno-sched-interblock.
 * Compiled 188 bytes: 7 differing words; first difference +0x60. No matching credit.
 * Remaining issue: register choice in the table loop (38 -> 7 words, right length 188 B): the
 * table is read and cleared as fx->table[k] (a giv of k, so the counter is not reversed) and
 * also through a stepped cur pointer, separate handle locals put the first handle straight in
 * a0; left: retail keeps the loop handle in v1 (copy to a0 in the bne slot) and the global high
 * in a1, ours loads the handle into a0; with interblock scheduling the registers match but k++
 * is hoisted to the loop head (12 words); by-value inline helper, do-while and for-increment
 * forms tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x141B80 -- resets an object's state and releases its effect handle and five table handles, clearing the global handle when it matches. */
typedef struct { int handle; char pad04[0xC]; int table[5]; } Fx;
typedef struct { char pad00[0x45]; unsigned char b45; unsigned char b46; char pad47[0x58 - 0x47]; Fx *fx; char pad5C[0x70 - 0x5C]; int w70; } Obj;
extern void func_097840(int a0);
extern int D_001F6398;

void func_141B80(Obj *o)
{
    Fx *fx;
    unsigned int k;
    int h;
    int v;
    int *cur;

    o->b45 = 1;
    o->w70 = 0;
    o->b46 = 0;
    fx = o->fx;
    h = fx->handle;
    if (h != 0) {
        if (h == D_001F6398) {
            D_001F6398 = 0;
        } else {
            func_097840(h);
        }
        fx->handle = 0;
    }
    cur = fx->table;
    for (k = 0; k < 5; k++) {
        v = fx->table[k];
        if (v != 0) {
            if (v == D_001F6398) {
                D_001F6398 = 0;
            } else {
                func_097840(v);
            }
            fx->table[k] = 0;
            *cur = 0;
        }
        cur++;
    }
}
