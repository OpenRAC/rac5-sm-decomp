/* LEVEL_20:0x0E3A40 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_001FFA18[];
extern int D_001FFA00[];
extern int func_0E35F0(int value);
extern int func_0E38B0(unsigned int index);
extern int func_07CE58(int index, int value);

int func_0E3A40(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_001FFA18[index].tail == 6)
        func_0E35F0(1);
    func_0E38B0(index);
    func_07CE58(D_001FFA00[index], 0);
    return 1;
}
