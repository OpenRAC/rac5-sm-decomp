/* LEVEL_02:0x028ED8 -- placement copy of LEVEL_01_0286F0.c: tests whether the value is one of the global list's
   entries. */
typedef struct {
    int items[8];
    unsigned int count;
} List;

extern List D_00248440;

int func_028ED8(int value)
{
    unsigned int i;

    for (i = 0; i < D_00248440.count; i++)
        if (value == D_00248440.items[i])
            return 1;
    return 0;
}
