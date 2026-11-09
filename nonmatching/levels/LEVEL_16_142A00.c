/* LEVEL_16.REL:0x142A00: reviewed 236-byte candidate, held for ABI review.
 * Attaches an object to an owner, updating flags, and resets its state block.
 * pinned C with gnu-ee-trial links 236/236 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_16_142AF0.c declares it returning void with (pointer,
 * int).
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_16_142DC8.c declares it returning void with (pointer,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x20];
    int id;
    char pad24[0x10];
} Slot142A00;

typedef struct {
    int pad0;
    Slot142A00 *slots;
} Table142A00;

struct Obj142A00;

typedef struct {
    char pad0[0x5E0];
    struct Obj142A00 *cur;
} Owner142A00;

typedef struct {
    Owner142A00 *owner;
    char pad4[0xC];
    int f10;
    char pad14[4];
    float f18;
    int f1C;
    char f20;
    char pad21[7];
    unsigned int f28;
} State142A00;

typedef struct Obj142A00 {
    char pad0[0x40];
    Table142A00 *table;
    unsigned char index;
    char pad45[0x13];
    State142A00 *state;
    char pad5C[8];
    int flags;
} Obj142A00;

extern int func_112E00(void);
extern int func_115498(void);

void func_142A00(Obj142A00 *o, Owner142A00 *w)
{
    State142A00 *s = o->state;

    if (w) {
        if (s->f10 == 0 && func_112E00() == 1 && func_115498() == 0)
            s->f28 |= 1;
        if (w->cur && w->cur->table->slots[w->cur->index].id == 0x9E7634E5) {
            o->flags |= 0x20;
        } else {
            w->cur = o;
            o->flags &= ~0x20;
        }
    }
    s->owner = w;
    s->f18 = 0.1f;
    s->f20 = 1;
    s->f1C = 0;
}
