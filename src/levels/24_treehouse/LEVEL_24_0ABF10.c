/* LEVEL_24:0x0ABF10 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_002F3848[];
extern int D_001CCEF0[];
extern void func_0ABE90(int index);
extern void func_0ABF88(int index, int value);

void func_0ABF10(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0ABE90(index);
    D_002F3848[index].w8 = 0;
    D_002F3848[index].w10 = 0xFF0AEEFFU;
    func_0ABF88(index, D_001CCEF0[index]);
}
