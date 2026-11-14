/* LEVEL_22:0x10B3B8 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_002E40F8[];
extern int D_002E40E0[];
extern int func_10AF68(int value);
extern int func_10B228(unsigned int index);
extern int func_091C00(int index, int value);

int func_10B3B8(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_002E40F8[index].tail == 6)
        func_10AF68(1);
    func_10B228(index);
    func_091C00(D_002E40E0[index], 0);
    return 1;
}
