/* LEVEL_22:0x06C590 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_00155498;
extern Ent D_0018C0B0[];

int func_06C590(void *value)
{
    unsigned int i;

    for (i = 0; i < D_00155498; i++)
        if (D_0018C0B0[i].id == value)
            return 1;
    return 0;
}
