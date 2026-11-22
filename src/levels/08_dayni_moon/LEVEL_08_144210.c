/* LEVEL_08:0x144210 -- placement copy of LEVEL_01_132CD8.c: sets or clears the given flag bits in the current record; returns zero when there is no record. */
typedef struct {
    char pad0[0x94];
    unsigned int flags;
} Rec;

extern Rec *D_0024FF0C;

int func_144210(unsigned int mask, int set)
{
    Rec *r = D_0024FF0C;
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
