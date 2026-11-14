/* LEVEL_23:0x0A9478 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_002F8DD8[];
extern int D_001CF670[];
extern void func_0A93F8(int index);
extern void func_0A94F0(int index, int value);

void func_0A9478(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0A93F8(index);
    D_002F8DD8[index].w8 = 0;
    D_002F8DD8[index].w10 = 0xFF0AEEFFU;
    func_0A94F0(index, D_001CF670[index]);
}
