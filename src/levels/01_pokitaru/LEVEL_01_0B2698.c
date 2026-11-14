/* LEVEL_01:0x0B2698 -- for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_00327988[];
extern int D_001FC270[];
extern void func_0B2618(int index);
extern void func_0B2710(int index, int value);

void func_0B2698(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_0B2618(index);
    D_00327988[index].w8 = 0;
    D_00327988[index].w10 = 0xFF0AEEFFU;
    func_0B2710(index, D_001FC270[index]);
}
