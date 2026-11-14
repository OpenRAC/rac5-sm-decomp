/* LEVEL_19:0x0A0890 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00275E18[];
extern int D_001AB430[];
extern void func_0A0810(int index);
extern void func_0A0908(int index, int value);

void func_0A0890(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0A0810(index);
    D_00275E18[index].w8 = 0;
    D_00275E18[index].w10 = 0xFF0AEEFFU;
    func_0A0908(index, D_001AB430[index]);
}
