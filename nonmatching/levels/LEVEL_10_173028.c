/* USA LEVEL_10:173028, 116-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 116 bytes: 2 differing words; first difference +0x48. No matching credit.
 * Remaining issue: sched2 tie (was 15 words): float/int/float locals loaded then stored give
 * retail registers and length; only the order of the reload_cse address copy (daddu v0,a2) vs
 * the first lwc1 differs: both priority 9 in sched2, lwc1 wins on dependent count; same 2 words
 * as twin LEVEL_15:1345F8; load/store orders, pointer locals, struct forms, alias flags tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_10:0x173028 -- selects entry index: notifies the helper, records the index and copies the entry's fields into the target pose and the object. */
typedef struct Entry {
    float pose;
    int value;
    float rate;
} Entry;

typedef struct Owner {
    char pad_00[0x48];
    float *pose;
} Owner;

typedef struct Obj {
    Owner *owner;
    char pad_04[0xE0];
    int index;
    int value;
    float rate;
} Obj;

extern Entry D_0022A4E8[];
extern void func_07D188(Owner *owner, float time, unsigned int index);

void func_173028(Obj *o, int index, float time)
{
    float *dst;
    float pose;
    int value;
    float rate;

    func_07D188(o->owner, time, index);
    o->index = index;
    dst = o->owner->pose;
    pose = D_0022A4E8[index].pose;
    value = D_0022A4E8[index].value;
    rate = D_0022A4E8[index].rate;
    dst[2] = pose;
    o->value = value;
    o->rate = rate;
}
