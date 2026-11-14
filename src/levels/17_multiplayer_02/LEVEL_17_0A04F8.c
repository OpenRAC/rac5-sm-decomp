/* LEVEL_17:0x0A04F8 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00266F98[];
extern int D_0019D8B0[];
extern void func_0A0478(int index);
extern void func_0A0570(int index, int value);

void func_0A04F8(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0A0478(index);
    D_00266F98[index].w8 = 0;
    D_00266F98[index].w10 = 0xFF0AEEFFU;
    func_0A0570(index, D_0019D8B0[index]);
}
