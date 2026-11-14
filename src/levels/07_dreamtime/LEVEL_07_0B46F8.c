/* LEVEL_07:0x0B46F8 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_0033D288[];
extern int D_00210570[];
extern void func_0B4678(int index);
extern void func_0B4770(int index, int value);

void func_0B46F8(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0B4678(index);
    D_0033D288[index].w8 = 0;
    D_0033D288[index].w10 = 0xFF0AEEFFU;
    func_0B4770(index, D_00210570[index]);
}
