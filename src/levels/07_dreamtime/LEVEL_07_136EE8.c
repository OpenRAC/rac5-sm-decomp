/* LEVEL_07:0x136EE8 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_003A3F18[];
extern int D_003A3F00[];
extern int func_136A98(int value);
extern int func_136D58(unsigned int index);
extern int func_0A55F0(int index, int value);

int func_136EE8(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_003A3F18[index].tail == 6)
        func_136A98(1);
    func_136D58(index);
    func_0A55F0(D_003A3F00[index], 0);
    return 1;
}
