/* LEVEL_18:0x10F908 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_002DC838[];
extern int D_002DC820[];
extern int func_10F4B8(int value);
extern int func_10F778(unsigned int index);
extern int func_091770(int index, int value);

int func_10F908(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_002DC838[index].tail == 6)
        func_10F4B8(1);
    func_10F778(index);
    func_091770(D_002DC820[index], 0);
    return 1;
}
