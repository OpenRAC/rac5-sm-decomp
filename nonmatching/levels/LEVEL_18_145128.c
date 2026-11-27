/* USA LEVEL_18:145128, 220-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 220 bytes: 43 differing words; first difference +0xC. No matching credit.
 * Remaining issue: loop layout: logic corrected from retail (a matching actor that is not usable
 * ends the search with 8); a goto loop gives retail 220 B shape (test at top, b back with i++ in
 * the slot, slots reloaded) but loses loop.c hoisting and the 0x1C offset giv; every for/while
 * form rotates the loop (228-244 B, 47+ words)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_18:0x145128 -- looks through an object's pooled actors for one of the expected kind and, when it qualifies, stores it as the object's target. */
typedef struct {
    char pad0[0xAF];
    unsigned char bAF;
} Sub;

typedef struct {
    char pad0[0x24];
    int kind;
} Model;

typedef struct Actor {
    char pad0[0x40];
    Model *model;
    char pad44;
    unsigned char b45;
    char pad46[0x12];
    Sub *sub;
} Actor;

typedef struct {
    Actor *actor;
    char pad4[0x18];
} Slot;

typedef struct {
    char pad0[0x30];
    Actor *target;
    char pad34[0x24];
    Slot *slots;
} Pool;

typedef struct {
    char pad0[0x2C];
    Pool *pool;
    char pad30[8];
    unsigned char b38;
} State;


typedef struct {
    char pad0[0x54];
    State *state;
    Pool *rec;
} Obj;

static __inline__ unsigned char Usable(Actor *a)
{
    if (a->b45 == 15 || a->b45 == 13) {
        return 0;
    }
    return a->sub->bAF == 0;
}

int func_145128(Obj *o)
{
    State *s;
    Pool *rec;
    Pool *pool;
    Slot *p;
    Slot *end;
    Actor *a;
    unsigned int count;
    unsigned int i;
    int found;

    s = o->state;
    rec = o->rec;
    if (s->b38 == 0) {
        return 8;
    }
    pool = s->pool;
    found = 0;
    count = 0;
    p = pool->slots;
    end = p + 12;
    do {
        if (p->actor != 0) {
            count++;
        }
        p++;
    } while (p < end);
    i = 0;
loop:
    if (i < count) {
        a = pool->slots[i].actor;
        if (a != 0 && a->model->kind == 0x2BD88B60) {
            if (Usable(a)) {
                rec->target = a;
                found = 1;
            }
        } else {
            i++;
            goto loop;
        }
    }
    return found ? 7 : 8;
}
