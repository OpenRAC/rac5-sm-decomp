/* LEVEL_06:0x076808 -- placement copy of LEVEL_01_07CC28.c: picks a random scaled value for an indexed item, applies it and returns it (or -1). */
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
extern void func_07B868(Obj07CC28 *o);
extern int func_082A28(Item07CC28 *it, char *d);
extern void func_081998(char *d, char *e, float v);

float func_076808(Obj07CC28 *o, unsigned int idx)
{
    Info07CC28 *info = o->table->ents[o->index].info;
    Item07CC28 *it;
    char *d;
    float v;
    float sc;

    if (idx >= info->count)
        return -1.0f;
    {
        func_07B868(o);
        it = info->items + idx;
        d = o->dest + 0x5C + ((o->flags >> 8) & 1) * 0x28;
        func_082A28(it, d);
        sc = it->scale;
        v = sc * ((float)rand() * 4.656613e-10f);
        func_081998(o->dest, d, v);
        ((Dest07CC28 *)o->dest)->f8 = 1.0f;
    }
    return v;
}
