/* USA LEVEL_01:09FDA8, 228-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 228 bytes: 9 differing words; first difference +0x5C. No matching credit.
 * Remaining issue: loop-body register/giv order only: unsigned counters (stop the inner loop
 * reversal) plus a record pointer p = &D[i] for the x[1]/x[0] stores give retail length and both
 * 0x11C multiplier registers (52->9 words); left: retail computes the inner giv as (i*size + x
 * base) + 2 and stores x[1] before x[0], ours (i*size + 2) + x base with the mults in a1/v0;
 * inner pointer local, p->x forms, index spellings, store orders tried
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x09FDA8 -- clears the two pad state records, marks each as enabled with all four actuator alignment bytes set to 0xFF, and registers the alignment with the pad library. */
extern void *memset(void *, int, unsigned int);
extern int scePadSetActAlign(int port, int slot, unsigned char *data);

typedef struct {
    char pad00[6];
    unsigned char x[6];
    char pad0C[0x11C - 0xC];
} Pad;

extern Pad D_0029C688[2];

void func_09FDA8(void)
{
    unsigned int i;
    unsigned int j;
    Pad *p;

    memset(D_0029C688, 0, 0x238);
    for (i = 0; i < 2; i++) {
        p = &D_0029C688[i];
        p->x[1] = 1;
        p->x[0] = 0;
        for (j = 2; j < 6; j++) {
            D_0029C688[i].x[j] = 0xFF;
        }
        scePadSetActAlign(i, 0, D_0029C688[i].x);
    }
}
