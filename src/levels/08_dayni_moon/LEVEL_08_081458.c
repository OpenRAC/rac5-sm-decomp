/* LEVEL_08:0x081458 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_0023EFD8;
extern Ent D_00289740[];

int func_081458(void *value)
{
    unsigned int i;

    for (i = 0; i < D_0023EFD8; i++)
        if (D_00289740[i].id == value)
            return 1;
    return 0;
}
