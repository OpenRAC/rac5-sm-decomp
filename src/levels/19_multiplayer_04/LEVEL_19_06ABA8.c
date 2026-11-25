/* LEVEL_19:0x06ABA8 -- placement copy of LEVEL_16_06AAD0.c: placement copy of LEVEL_01_079BD0.c: tests whether the value is the id of one of the table entries. */
typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_001A4CE8;
extern Ent D_001ECD00[];

int func_06ABA8(void *value)
{
    unsigned int i;

    for (i = 0; i < D_001A4CE8; i++)
        if (D_001ECD00[i].id == value)
            return 1;
    return 0;
}
