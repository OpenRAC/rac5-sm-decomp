/* LEVEL_17:0x06B178 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_00197168;
extern Ent D_001DDE80[];

int func_06B178(void *value)
{
    unsigned int i;

    for (i = 0; i < D_00197168; i++)
        if (D_001DDE80[i].id == value)
            return 1;
    return 0;
}
