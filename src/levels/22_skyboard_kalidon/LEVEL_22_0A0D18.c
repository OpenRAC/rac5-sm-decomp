/* LEVEL_22:0x0A0D18 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_0027D558[];
extern int D_0015B5F0[];
extern void func_0A0C98(int index);
extern void func_0A0D90(int index, int value);

void func_0A0D18(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0A0C98(index);
    D_0027D558[index].w8 = 0;
    D_0027D558[index].w10 = 0xFF0AEEFFU;
    func_0A0D90(index, D_0015B5F0[index]);
}
