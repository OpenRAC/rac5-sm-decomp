/* LEVEL_02:0x13A298 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_003A5B18[];
extern int D_003A5B00[];
extern int func_139E48(int value);
extern int func_13A108(unsigned int index);
extern int func_0A9F00(int index, int value);

int func_13A298(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_003A5B18[index].tail == 6)
        func_139E48(1);
    func_13A108(index);
    func_0A9F00(D_003A5B00[index], 0);
    return 1;
}
