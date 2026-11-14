/* LEVEL_08:0x145420 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_003DD898[];
extern int D_003DD880[];
extern int func_144FD0(int value);
extern int func_145290(unsigned int index);
extern int func_0ADEE8(int index, int value);

int func_145420(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_003DD898[index].tail == 6)
        func_144FD0(1);
    func_145290(index);
    func_0ADEE8(D_003DD880[index], 0);
    return 1;
}
