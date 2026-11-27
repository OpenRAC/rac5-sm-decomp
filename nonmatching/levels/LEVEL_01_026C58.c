/* USA LEVEL_01:026C58, 224-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 224 bytes: 14 differing words; first difference +0x18. No matching credit.
 * Remaining issue: prologue schedule (swc1 f20 / global load order) + loop exit layout: retail
 * continues through a bnel on the flag bit (i++ in the likely slot) and returns 0 via b, ours
 * exits through beqz; indexed ents[i] form 14 words (was 15); pointer, ||, continue, break forms
 * and -fexceptions tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x026C58 -- gathers entries and checks every one carries a flag. */
typedef struct {
    int pad0[3];
    int i0C;
    struct {
        char pad0[0x40];
        struct {
            char pad0[0x10];
            struct {
                char pad0[0x3C];
                unsigned flags;
            } *o;
        } *m;
    } *p10;
    int i14;
} Ent;
extern int D_00206D9C;
extern int func_1161A0(void *a, Ent *e, int *c, int s0, int s1, int g, int z);
extern int func_020FE8(Ent *e, int n, int s0, int s1, float f, int k, int z);

int func_026C58(int s0, int s1, float f)
{
    Ent ents[16];
    char buf[16];
    int n;
    int i;
    Ent *e;

    if (func_1161A0(buf, ents, &ents[0].i0C, s0, s1, D_00206D9C, 0) == 0) {
        n = func_020FE8(ents, 16, s0, s1, f, 0x68, 0);
        if (n != 0) {
            for (i = 0; i < n; i++) {
                if (ents[i].i14 != 2)
                    return 0;
                if ((ents[i].p10->m->o->flags & 0x800) == 0)
                    return 0;
            }
        }
        return 1;
    }
    return 0;
}
