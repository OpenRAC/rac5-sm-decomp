/* USA LEVEL_05:18E720, 176-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: -fno-schedule-insns -mno-check-zero-division.
 * Compiled 176 bytes: 15 differing words; first difference +0x4. No matching credit.
 * Remaining issue: schedule vs allocation: without sched1 the item pointer is loaded straight
 * into a1 as retail (length 176 = retail), but the owner flag constant, the rand call and the
 * argument moves are then out of retail order; with sched1 (24 words, 180 B) the a1 copy lands
 * between the float loads so the pointer stays in v1; inline helper, early return and slot local
 * tried; func_07E070 no accepted body
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_05:0x18E720 -- marks the owner's flag, and when the record has no active entry picks one of two table entries at random and starts it with the entry's four floats; returns 2. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Item;

typedef struct {
    char pad00[4];
    unsigned char flag;
} Owner;

typedef struct {
    char pad00[0x18];
    int active;
} Rec;

typedef struct {
    char pad00[0x54];
    Owner *owner;
    Rec *rec;
} Obj;

extern Item *D_0038E4A0[];
extern int rand(void);
extern void func_07E070(float a, float b, float c, float d, Obj *o, void *item, int *slot, int w, int x, int y, int z, int k);

int func_18E720(Obj *o)
{
    Rec *rec = o->rec;
    Item *it;
    int n;

    o->owner->flag = 1;
    if (rec->active == 0) {
        n = 2;
        it = D_0038E4A0[rand() % n];
        if (it != 0) {
            int *slot = &rec->active;
            func_07E070(it->f14, it->f18, it->f1C, it->f20, o, it, slot, 0, 0, 0, 0, 1);
        }
    }
    return 2;
}
