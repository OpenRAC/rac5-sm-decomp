/* LEVEL_04:0x16DD38 -- returns the first record of the global pool that is in state 1, or in state 3 with its active flag set; 0 when none. */
typedef struct { char pad0[0x45]; unsigned char state; char pad46[0x64 - 0x46]; unsigned int flags; char pad68[0x80 - 0x68]; } Rec;
typedef struct { char pad0[0xC]; Rec *recs; char pad10[0x30 - 0x10]; int count; } Pool;
extern Pool *D_00220D8C;

Rec *func_16DD38(void)
{
    Rec *p;
    Rec *end;

    end = D_00220D8C->recs + D_00220D8C->count;
    p = D_00220D8C->recs;
    for (; p != end; p++) {
        if (((p->flags & 1) && p->state == 3) || p->state == 1) {
            return p;
        }
    }
    return 0;
}
