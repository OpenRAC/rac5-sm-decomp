/* LEVEL_24:0x074338 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_001C6D98;
extern Ent D_002063B0[];

int func_074338(void *value)
{
    unsigned int i;

    for (i = 0; i < D_001C6D98; i++)
        if (D_002063B0[i].id == value)
            return 1;
    return 0;
}
