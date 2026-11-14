/* LEVEL_05:0x12F860 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_0037A4D8[];
extern int D_0037A4C0[];
extern int func_12F410(int value);
extern int func_12F6D0(unsigned int index);
extern int func_0A1BB0(int index, int value);

int func_12F860(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_0037A4D8[index].tail == 6)
        func_12F410(1);
    func_12F6D0(index);
    func_0A1BB0(D_0037A4C0[index], 0);
    return 1;
}
