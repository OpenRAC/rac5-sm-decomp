/* LEVEL_01:0x0286F0 -- tests whether the value is one of the global list's
   entries. */
typedef struct {
    int items[8];
    unsigned int count;
} List;

extern List D_00230F40;

int func_0286F0(int value)
{
    unsigned int i;

    for (i = 0; i < D_00230F40.count; i++)
        if (value == D_00230F40.items[i])
            return 1;
    return 0;
}
