/* LEVEL_06:0x12A5B8 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_0037B398[];
extern int D_0037B380[];
extern int func_12A168(int value);
extern int func_12A428(unsigned int index);
extern int func_09DDC0(int index, int value);

int func_12A5B8(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_0037B398[index].tail == 6)
        func_12A168(1);
    func_12A428(index);
    func_09DDC0(D_0037B380[index], 0);
    return 1;
}
