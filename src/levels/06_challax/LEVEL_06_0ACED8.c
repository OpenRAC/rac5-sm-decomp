/* LEVEL_06:0x0ACED8 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00314708[];
extern int D_001EB170[];
extern void func_0ACE58(int index);
extern void func_0ACF50(int index, int value);

void func_0ACED8(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0ACE58(index);
    D_00314708[index].w8 = 0;
    D_00314708[index].w10 = 0xFF0AEEFFU;
    func_0ACF50(index, D_001EB170[index]);
}
