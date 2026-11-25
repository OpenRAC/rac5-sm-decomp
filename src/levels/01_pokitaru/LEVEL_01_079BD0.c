/* LEVEL_01:0x079BD0 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_001F6118;
extern Ent D_0023A4B0[];

int func_079BD0(void *value)
{
    unsigned int i;

    for (i = 0; i < D_001F6118; i++)
        if (D_0023A4B0[i].id == value)
            return 1;
    return 0;
}
