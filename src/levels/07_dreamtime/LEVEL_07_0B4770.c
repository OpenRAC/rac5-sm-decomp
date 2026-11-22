/* LEVEL_07:0x0B4770 -- placement copy of LEVEL_01_0B2710.c: stores a value in the fourth word of the indexed table record when the index is below four. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_0033D288[];

void func_0B4770(int index, int value)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    D_0033D288[index].wC = value;
}
