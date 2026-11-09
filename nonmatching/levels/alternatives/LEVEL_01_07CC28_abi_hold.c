/* LEVEL_01.REL:0x07CC28: reviewed 252-byte candidate, held for ABI review.
 * Picks a random scaled value for an indexed item, applies it and returns it
 * (or -1).
 * gnu-ee-trial C with gnu-ee-trial links 252/252 bytes and is byte-exact at
 * this and 13 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x28];
    float scale;
    char pad2C[0x14];
} Item07CC28;

typedef struct {
    Item07CC28 *items;
    char pad4[4];
    unsigned char count;
} Info07CC28;

typedef struct {
    char pad0[8];
    Info07CC28 *info;
    char pad0C[0x28];
} Entry07CC28;

typedef struct {
    int pad0;
    Entry07CC28 *ents;
} Table07CC28;

typedef struct {
    char pad0[0x8];
    float f8;
} Dest07CC28;

typedef struct {
    char pad0[0x40];
    Table07CC28 *table;
    unsigned char index;
    char pad45[3];
    char *dest;
    char pad4C[0x18];
    unsigned int flags;
} Obj07CC28;

extern int rand(void);
extern void func_082758(Obj07CC28 *o);
extern int func_089BE8(Item07CC28 *it, char *d);
extern void func_088B20(char *d, char *e, float v);

float func_07CC28(Obj07CC28 *o, unsigned int idx)
{
    Info07CC28 *info = o->table->ents[o->index].info;
    Item07CC28 *it;
    char *d;
    float v;
    float sc;

    if (idx >= info->count)
        return -1.0f;
    {
        func_082758(o);
        it = info->items + idx;
        d = o->dest + 0x5C + ((o->flags >> 8) & 1) * 0x28;
        func_089BE8(it, d);
        sc = it->scale;
        v = sc * ((float)rand() * 4.656613e-10f);
        func_088B20(o->dest, d, v);
        ((Dest07CC28 *)o->dest)->f8 = 1.0f;
    }
    return v;
}
