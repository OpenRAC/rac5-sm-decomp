/* LEVEL_03:0x0B2480 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00342818[];
extern int D_002148F0[];
extern void func_0B2400(int index);
extern void func_0B24F8(int index, int value);

void func_0B2480(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0B2400(index);
    D_00342818[index].w8 = 0;
    D_00342818[index].w10 = 0xFF0AEEFFU;
    func_0B24F8(index, D_002148F0[index]);
}
