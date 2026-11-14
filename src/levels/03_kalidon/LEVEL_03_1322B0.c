/* LEVEL_03:0x1322B0 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_003A9498[];
extern int D_003A9480[];
extern int func_131E60(int value);
extern int func_132120(unsigned int index);
extern int func_0A3370(int index, int value);

int func_1322B0(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_003A9498[index].tail == 6)
        func_131E60(1);
    func_132120(index);
    func_0A3370(D_003A9480[index], 0);
    return 1;
}
