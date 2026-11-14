/* LEVEL_19:0x1112F8 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_002DC638[];
extern int D_002DC620[];
extern int func_110EA8(int value);
extern int func_111168(unsigned int index);
extern int func_091FF0(int index, int value);

int func_1112F8(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_002DC638[index].tail == 6)
        func_110EA8(1);
    func_111168(index);
    func_091FF0(D_002DC620[index], 0);
    return 1;
}
