/* USA LEVEL_10:1A8690, 160-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 160 bytes: 21 differing words; first difference +0x8. No matching credit.
 * Remaining issue: register allocation/hoist (160 B now, from 38 words at 168 B): inline
 * Burst/Fade helpers give retail per-call 0.2f rematerialisation and link = o->link before the
 * state test the delay-slot load; retail hoists lui hi(D_001FCFAC) into the entry block and
 * allocates o s0 / hi s1, ours keeps the lui in the state block and swaps s0/s1; -fno-sched-
 * interblock, -fno-gcse, -fexceptions, gnu-ee-trial tried (-fno-schedule-insns 18)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_10:0x1A8690 -- in state 14, triggers the shared effect twice, releases the linked record's resource and runs the follow-up helper. */
typedef struct Link {
    char pad_00[0x6C];
    void *res;
} Link;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char b45;
    char pad_46[0x12];
    Link *link;
} Obj;

extern char *D_001FCFAC;
extern void func_1E0240(Obj *o, int a, int b, float f);
extern void func_1E02B8(int *a0, int a1, float f12);
extern void func_07CCA0(void *p, int a1);
extern void func_1E2E10(Obj *o);

static __inline__ void Burst(Obj *o)
{
    func_1E0240(o, *(int *)(D_001FCFAC + 0x13734), 0x20, 0.2f);
}

static __inline__ void Fade(void)
{
    func_1E02B8((int *)(D_001FCFAC + 0x13734), 0x20, 0.2f);
}

void func_1A8690(Obj *o)
{
    Link *link;

    link = o->link;
    if (o->b45 == 14) {
        Burst(o);
        Fade();
        func_07CCA0(link->res, 1);
        func_1E2E10(o);
    }
}
