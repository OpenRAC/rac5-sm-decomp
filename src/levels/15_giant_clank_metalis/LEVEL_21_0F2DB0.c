/* LEVEL_21:0x0F2DB0 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_002A5998[];
extern int D_002A5980[];
extern int func_0F2960(int value);
extern int func_0F2C20(unsigned int index);
extern int func_083EE8(int index, int value);

int func_0F2DB0(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_002A5998[index].tail == 6)
        func_0F2960(1);
    func_0F2C20(index);
    func_083EE8(D_002A5980[index], 0);
    return 1;
}
