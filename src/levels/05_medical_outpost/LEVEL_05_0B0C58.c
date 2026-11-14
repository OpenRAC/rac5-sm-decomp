/* LEVEL_05:0x0B0C58 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00313848[];
extern int D_001EB5F0[];
extern void func_0B0BD8(int index);
extern void func_0B0CD0(int index, int value);

void func_0B0C58(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0B0BD8(index);
    D_00313848[index].w8 = 0;
    D_00313848[index].w10 = 0xFF0AEEFFU;
    func_0B0CD0(index, D_001EB5F0[index]);
}
