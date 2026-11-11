/* LEVEL_03:0x0285D0 -- placement copy of LEVEL_01_0286F0.c: tests whether the value is one of the global list's
   entries. */
typedef struct {
    int items[8];
    unsigned int count;
} List;

extern List D_0024BDC0;

int func_0285D0(int value)
{
    unsigned int i;

    for (i = 0; i < D_0024BDC0.count; i++)
        if (value == D_0024BDC0.items[i])
            return 1;
    return 0;
}
