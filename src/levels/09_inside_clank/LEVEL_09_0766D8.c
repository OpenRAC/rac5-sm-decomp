/* LEVEL_09:0x0766D8 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_001DFF18;
extern Ent D_00221C30[];

int func_0766D8(void *value)
{
    unsigned int i;

    for (i = 0; i < D_001DFF18; i++)
        if (D_00221C30[i].id == value)
            return 1;
    return 0;
}
