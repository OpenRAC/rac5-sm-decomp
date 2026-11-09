/* FRONTEND.REL:0x021948: reviewed 184-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_13A420.c.
 * pinned C with gnu-ee-trial links 184/184 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_001EC1E8[];
extern int func_021C78(unsigned int idx);
extern int func_021C40(unsigned int idx);
extern unsigned int func_01F308(void *p);

int func_021948(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_021C78(idx) == 0)
        return 0;
    if (func_021C40(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_001EC1E8[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_01F308(&D_001EC1E8[idx]);
    if (val > cap)
        return 0;
    D_001EC1E8[idx].value = val;
    D_001EC1E8[idx].flag = 0;
    return 1;
}
