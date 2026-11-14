/* LEVEL_08:0x1955C8 -- placement copy of LEVEL_03_177FF0.c: merges a masked 16-bit value into a record field selected through a table. */
typedef struct { char pad00[0x64]; char *recs; } Pool;
typedef struct { unsigned short handle; char pad02; unsigned char pool; } Slot;
typedef struct { char pad00[0x58]; Slot *slot; } Owner;
typedef struct { char pad00[8]; unsigned short bits; } Ent;
extern Pool D_0027E978[];

void func_1955C8(Owner *o, unsigned int mask, unsigned int value)
{
    Slot *s = o->slot;
    Ent *e;

    if (s->handle == 0xFFFF) {
        return;
    }
    e = (Ent *)(D_0027E978[s->pool].recs + (s->handle << 4));
    e->bits = (e->bits & mask) | value;
}
