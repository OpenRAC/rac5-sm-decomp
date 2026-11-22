/* LEVEL_18:0x0A0088 -- placement copy of LEVEL_01_0B2710.c: stores a value in the fourth word of the indexed table record when the index is below four. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00276018[];

void func_0A0088(int index, int value)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    D_00276018[index].wC = value;
}
