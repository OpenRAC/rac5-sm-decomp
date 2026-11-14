/* LEVEL_04:0x0B7C88 -- stores a value in the third word of a 20-byte table entry when index is below four. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
} Entry;

extern Entry D_00342188[];

void func_0B7C88(int index, int value)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    D_00342188[index].w8 = value;
}
