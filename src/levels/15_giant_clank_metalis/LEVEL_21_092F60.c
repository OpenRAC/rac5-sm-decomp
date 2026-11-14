/* LEVEL_21:0x092F60 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_0023F9C8[];
extern int D_00150EF0[];
extern void func_092EE0(int index);
extern void func_092FD8(int index, int value);

void func_092F60(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_092EE0(index);
    D_0023F9C8[index].w8 = 0;
    D_0023F9C8[index].w10 = 0xFF0AEEFFU;
    func_092FD8(index, D_00150EF0[index]);
}
