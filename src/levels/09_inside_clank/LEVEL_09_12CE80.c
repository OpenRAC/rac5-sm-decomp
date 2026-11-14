/* LEVEL_09:0x12CE80 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_00375D98[];
extern int D_00375D80[];
extern int func_12CA30(int value);
extern int func_12CCF0(unsigned int index);
extern int func_0A08A0(int index, int value);

int func_12CE80(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_00375D98[index].tail == 6)
        func_12CA30(1);
    func_12CCF0(index);
    func_0A08A0(D_00375D80[index], 0);
    return 1;
}
