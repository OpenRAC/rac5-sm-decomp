/* USA LEVEL_02:180668, 216-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 216 bytes: 6 differing words; first difference +0x9C. No matching credit.
 * Remaining issue: delay slot / div padding: resolve-flag form (if (off == 0) ok = 0; else {
 * r->ent = D + off; ok = 1; }) and an Ent* with the Info* at +4 give 216 B and the first 0x9C
 * bytes exact (was 59 words, 244 B); retail leaves a nop in the b slot of the unsigned-to-float
 * join and pads div.s with two nops, ours steals the add.s into the slot (divpad route adds the
 * nops but keeps the stolen add.s, 9 words)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_02:0x180668 -- resolves the record's two stored offsets into pointers (rejecting a first link whose word +0x40 is zero) and stores the value range of the second's info divided by twice the record's count. */
extern int D_0021BD54;

typedef struct Info {
    char pad00[4];
    float f04;
    char pad08[0xC];
    float f14;
} Info;

typedef struct Ent {
    char pad00[4];
    Info *info;
} Ent;

typedef struct Rec {
    int link;
    Ent *ent;
    unsigned int count;
} Rec;

typedef struct Obj {
    char pad00[0x54];
    Rec *rec;
    float *out;
} Obj;

static __inline__ int ResolveLink(Rec *r)
{
    int target;

    if (r->link == 0)
        return 0;
    target = D_0021BD54 + r->link;
    if (*(int *)(target + 0x40) == 0) {
        r->link = 0;
        return 0;
    }
    r->link = target;
    return 1;
}

static __inline__ int ResolveEnt(Rec *r)
{
    int off = (int)r->ent;
    int ok;

    if (off == 0) {
        ok = 0;
    } else {
        r->ent = (Ent *)(D_0021BD54 + off);
        ok = 1;
    }
    return ok;
}

int func_180668(Obj *o)
{
    Rec *r = o->rec;
    Info *info;

    if (!ResolveLink(r))
        return 0;
    if (!ResolveEnt(r))
        return 0;
    info = r->ent->info;
    *o->out = (info->f14 - info->f04) / ((float)r->count * 2.0f);
    return 1;
}
