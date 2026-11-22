/* LEVEL_20:0x0E2940 -- placement copy of LEVEL_01_132CD8.c: sets or clears the given flag bits in the current record; returns zero when there is no record. */
typedef struct {
    char pad0[0x94];
    unsigned int flags;
} Rec;

extern Rec *D_0011721C;

int func_0E2940(unsigned int mask, int set)
{
    Rec *r = D_0011721C;
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
