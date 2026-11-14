/* LEVEL_18:0x0A0010 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00276018[];
extern int D_001AB730[];
extern void func_09FF90(int index);
extern void func_0A0088(int index, int value);

void func_0A0010(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_09FF90(index);
    D_00276018[index].w8 = 0;
    D_00276018[index].w10 = 0xFF0AEEFFU;
    func_0A0088(index, D_001AB730[index]);
}
