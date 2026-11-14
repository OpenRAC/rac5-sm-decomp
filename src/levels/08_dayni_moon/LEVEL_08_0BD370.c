/* LEVEL_08:0x0BD370 -- placement copy of LEVEL_04_0B7C88.c: stores a value in the third word of a 20-byte table entry when index is below four. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
} Entry;

extern Entry D_00376C08[];

void func_0BD370(int index, int value)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    D_00376C08[index].w8 = value;
}
