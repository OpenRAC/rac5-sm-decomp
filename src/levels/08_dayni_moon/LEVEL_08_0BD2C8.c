/* LEVEL_08:0x0BD2C8 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00376C08[];
extern int D_00245130[];
extern void func_0BD248(int index);
extern void func_0BD340(int index, int value);

void func_0BD2C8(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0BD248(index);
    D_00376C08[index].w8 = 0;
    D_00376C08[index].w10 = 0xFF0AEEFFU;
    func_0BD340(index, D_00245130[index]);
}
