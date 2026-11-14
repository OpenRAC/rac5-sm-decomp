/* LEVEL_08:0x1790E0 -- placement copy of LEVEL_04_16DD38.c: returns the first record of the global pool that is in state 1, or in state 3 with its active flag set; 0 when none. */
typedef struct { char pad0[0x45]; unsigned char state; char pad46[0x64 - 0x46]; unsigned int flags; char pad68[0x80 - 0x68]; } Rec;
typedef struct { char pad0[0xC]; Rec *recs; char pad10[0x30 - 0x10]; int count; } Pool;
extern Pool *D_00250874;

Rec *func_1790E0(void)
{
    Rec *p;
    Rec *end;

    end = D_00250874->recs + D_00250874->count;
    p = D_00250874->recs;
    for (; p != end; p++) {
        if (((p->flags & 1) && p->state == 3) || p->state == 1) {
            return p;
        }
    }
    return 0;
}
