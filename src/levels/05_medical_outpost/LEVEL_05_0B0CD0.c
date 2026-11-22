/* LEVEL_05:0x0B0CD0 -- placement copy of LEVEL_01_0B2710.c: stores a value in the fourth word of the indexed table record when the index is below four. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00313848[];

void func_0B0CD0(int index, int value)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    D_00313848[index].wC = value;
}
