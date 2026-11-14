/* LEVEL_20:0x08B6F8 -- placement copy of LEVEL_01_0B2698.c: for a valid slot index, prepares the slot, clears its state word, sets its colour word and starts it with its table value. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    unsigned int w10;
} Slot;

extern Slot D_001994D8[];
extern int D_0010C990[];
extern void func_08B678(int index);
extern void func_08B770(int index, int value);

void func_08B6F8(int index)
{
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    func_08B678(index);
    D_001994D8[index].w8 = 0;
    D_001994D8[index].w10 = 0xFF0AEEFFU;
    func_08B770(index, D_0010C990[index]);
}
