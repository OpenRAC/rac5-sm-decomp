/* LEVEL_19:0x13F698 -- placement copy of LEVEL_16_142A00.c: attaches an object to an owner, updating flags, and resets its state block. */
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
    int owner;
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

extern int func_1135A8(void);
extern int func_115C10(void);

void func_13F698(Obj142A00 *o, int owner)
{
    State142A00 *s = o->state;
    Owner142A00 *w = (Owner142A00 *)owner;

    if (w) {
        if (s->f10 == 0 && func_1135A8() == 1 && func_115C10() == 0)
            s->f28 |= 1;
        if (w->cur && w->cur->table->slots[w->cur->index].id == 0x9E7634E5) {
            o->flags |= 0x20;
        } else {
            w->cur = o;
            o->flags &= ~0x20;
        }
    }
    s->owner = owner;
    s->f18 = 0.1f;
    s->f20 = 1;
    s->f1C = 0;
}
