/* LEVEL_18:0x06A208 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_001A4FE8;
extern Ent D_001ECF00[];

int func_06A208(void *value)
{
    unsigned int i;

    for (i = 0; i < D_001A4FE8; i++)
        if (D_001ECF00[i].id == value)
            return 1;
    return 0;
}
