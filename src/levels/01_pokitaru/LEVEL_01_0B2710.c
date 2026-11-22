/* LEVEL_01:0x0B2710 -- stores a value in the fourth word of the indexed table record when the index is below four. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00327988[];

void func_0B2710(int index, int value)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    D_00327988[index].wC = value;
}
