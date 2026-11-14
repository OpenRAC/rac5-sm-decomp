/* LEVEL_04:0x140368 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_003A8E18[];
extern int D_003A8E00[];
extern int func_13FF18(int value);
extern int func_1401D8(unsigned int index);
extern int func_0A8800(int index, int value);

int func_140368(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_003A8E18[index].tail == 6)
        func_13FF18(1);
    func_1401D8(index);
    func_0A8800(D_003A8E00[index], 0);
    return 1;
}
