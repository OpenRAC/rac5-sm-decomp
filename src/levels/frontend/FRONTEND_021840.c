/* FRONTEND:0x021840 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_001EC1E8[];
extern int D_001EC1D0[];
extern int func_021438(int value);
extern int func_0216B0(unsigned int index);
extern int func_0083F8(int index, int value);

int func_021840(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_001EC1E8[index].tail == 6)
        func_021438(1);
    func_0216B0(index);
    func_0083F8(D_001EC1D0[index], 0);
    return 1;
}
