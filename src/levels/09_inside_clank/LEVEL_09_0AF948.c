/* LEVEL_09:0x0AF948 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_0030F108[];
extern int D_001E6070[];
extern void func_0AF8C8(int index);
extern void func_0AF9C0(int index, int value);

void func_0AF948(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0AF8C8(index);
    D_0030F108[index].w8 = 0;
    D_0030F108[index].w10 = 0xFF0AEEFFU;
    func_0AF9C0(index, D_001E6070[index]);
}
