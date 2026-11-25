/* LEVEL_07:0x07BDC0 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_0020A418;
extern Ent D_0024FDB0[];

int func_07BDC0(void *value)
{
    unsigned int i;

    for (i = 0; i < D_0020A418; i++)
        if (D_0024FDB0[i].id == value)
            return 1;
    return 0;
}
