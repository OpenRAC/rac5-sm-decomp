/* LEVEL_17:0x1101D0 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_002CD7B8[];
extern int D_002CD7A0[];
extern int func_10FD80(int value);
extern int func_110040(unsigned int index);
extern int func_091C58(int index, int value);

int func_1101D0(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_002CD7B8[index].tail == 6)
        func_10FD80(1);
    func_110040(index);
    func_091C58(D_002CD7A0[index], 0);
    return 1;
}
