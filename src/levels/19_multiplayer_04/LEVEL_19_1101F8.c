/* LEVEL_19:0x1101F8 -- placement copy of LEVEL_01_132CD8.c: sets or clears the given flag bits in the current record; returns zero when there is no record. */
typedef struct {
    char pad0[0x94];
    unsigned int flags;
} Rec;

extern Rec *D_001B5CDC;

int func_1101F8(unsigned int mask, int set)
{
    Rec *r = D_001B5CDC;
    unsigned int value;

    if (r == 0)
        return 0;
    if (set != 0)
        value = r->flags | mask;
    else
        value = r->flags & ~mask;
    r->flags = value;
    return 1;
}
