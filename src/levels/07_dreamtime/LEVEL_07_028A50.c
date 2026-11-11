/* LEVEL_07:0x028A50 -- placement copy of LEVEL_01_0286F0.c: tests whether the value is one of the global list's
   entries. */
typedef struct {
    int items[8];
    unsigned int count;
} List;

extern List D_00246840;

int func_028A50(int value)
{
    unsigned int i;

    for (i = 0; i < D_00246840.count; i++)
        if (value == D_00246840.items[i])
            return 1;
    return 0;
}
