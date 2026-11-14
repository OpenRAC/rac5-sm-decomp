/* LEVEL_23:0x125660 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_0035FB58[];
extern int D_0035FB40[];
extern int func_125210(int value);
extern int func_1254D0(unsigned int index);
extern int func_09A330(int index, int value);

int func_125660(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_0035FB58[index].tail == 6)
        func_125210(1);
    func_1254D0(index);
    func_09A330(D_0035FB40[index], 0);
    return 1;
}
