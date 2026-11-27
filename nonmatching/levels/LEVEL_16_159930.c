/* USA LEVEL_16:159930, 116-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 116 bytes: 7 differing words; first difference +0x0. No matching credit.
 * Remaining issue: register tie/schedule in the head (116 B, from 24 words): tail, reload order
 * and stores match with the inline max_ref(&idx, cnt) and cnt computed before the slot; retail
 * stores the index arg to its frame slot first and multiplies into t2 with 0xEC in v1, ours
 * keeps t2 live past the mult (mult v1,t2,v0); addressable-param, statement-order sweep (21
 * forms), -fno-schedule-insns (6-9 words) tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_16:0x159930 -- stores a record of two words, a float and three floats into an indexed slot of a block, then raises the block count to the index when it is larger. */
struct Obj {
    unsigned char pad0[0x58];
    unsigned char *p58;
};
static __inline__ unsigned int *max_ref(unsigned int *a, unsigned int *b) { return (*a < *b) ? b : a; }
void func_159930(struct Obj *o, unsigned int a1, unsigned int a2, float *a3, unsigned int t0, unsigned int t1,
                 unsigned int t2, float f12)
{
    unsigned char *blk;
    unsigned char *e;
    float *q;
    unsigned int *cnt;
    unsigned int idx;
    int off;

    idx = t2;
    off = t2 * 28;
    blk = o->p58 + a1 * 236;
    cnt = (unsigned int *)(blk + 0xE4);
    e = blk + off;
    *(float *)(e + 0x10) = f12;
    *(unsigned int *)(e + 0x18) = t1;
    *(unsigned int *)e = a2;
    *(unsigned int *)(e + 0x14) = t0;
    q = (float *)(e + 4);
    q[0] = a3[0];
    q[1] = a3[1];
    q[2] = a3[2];
    *cnt = *max_ref(&idx, cnt);
}
