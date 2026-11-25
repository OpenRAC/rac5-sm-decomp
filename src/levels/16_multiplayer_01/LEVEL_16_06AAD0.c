/* LEVEL_16:0x06AAD0 -- placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_001A3B68;
extern Ent D_001ECB80[];

int func_06AAD0(void *value)
{
    unsigned int i;

    for (i = 0; i < D_001A3B68; i++)
        if (D_001ECB80[i].id == value)
            return 1;
    return 0;
}
