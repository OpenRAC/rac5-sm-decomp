/* LEVEL_06:0x073058 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_001E5018;
extern Ent D_00227230[];

int func_073058(void *value)
{
    unsigned int i;

    for (i = 0; i < D_001E5018; i++)
        if (D_00227230[i].id == value)
            return 1;
    return 0;
}
