/* USA LEVEL_02:162928, 136-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: -fno-cse-follow-jumps -fno-cse-skip-blocks
 * -fno-gcse.
 * Compiled 136 bytes: 13 differing words; first difference +0x8. No matching credit.
 * Remaining issue: three parts: (1) base reload per block = array global D_0021BD54[1] (in-
 * struct alias lever); (2) one lui per block needs -fno-cse-skip-blocks -fno-cse-follow-jumps
 * (not in the accepted flag list; pinned alone keeps one hoisted lui, 120 B/33 words); (3)
 * materialised 0/1 flag: had = (w4 != 0); if (had) had = 1; else had = 0 blocks the jump.c
 * store-flag but re-reads w4 (13 words left in the flag block); a separate w local fixes the
 * reload but then the flag block layout differs (30 words)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_02:0x162928 -- clears the state byte and relocates the record offset fields by a global base; returns 0 when the first field was empty, else 1. */
typedef struct Rec {
    char pad_00[4];
    int w4;
    int w8;
    int wC;
    int w10;
} Rec;
typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0xE];
    Rec *rec;
} Obj;
extern int D_0021BD54[1];

int func_162928(Obj *o)
{
    Rec *r = o->rec;
    int had;

    o->state = 0;
    had = r->w4 != 0;
    if (had) had = 1; else had = 0;
    r->w4 = D_0021BD54[0] + r->w4;
    if (!had)
        return 0;
    if (r->w8 != 0)
        r->w8 = D_0021BD54[0] + r->w8;
    if (r->wC != 0)
        r->wC = D_0021BD54[0] + r->wC;
    if (r->w10 != 0)
        r->w10 = D_0021BD54[0] + r->w10;
    return 1;
}
