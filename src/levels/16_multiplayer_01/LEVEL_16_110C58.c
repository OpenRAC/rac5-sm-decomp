/* LEVEL_16:0x110C58 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_002DC4B8[];
extern int D_002DC4A0[];
extern int func_110808(int value);
extern int func_110AC8(unsigned int index);
extern int func_092760(int index, int value);

int func_110C58(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_002DC4B8[index].tail == 6)
        func_110808(1);
    func_110AC8(index);
    func_092760(D_002DC4A0[index], 0);
    return 1;
}
