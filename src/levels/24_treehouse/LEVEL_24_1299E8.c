/* LEVEL_24:0x1299E8 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_0035A4D8[];
extern int D_0035A4C0[];
extern int func_129598(int value);
extern int func_129858(unsigned int index);
extern int func_09CE68(int index, int value);

int func_1299E8(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_0035A4D8[index].tail == 6)
        func_129598(1);
    func_129858(index);
    func_09CE68(D_0035A4C0[index], 0);
    return 1;
}
