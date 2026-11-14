/* LEVEL_01:0x133EE8 -- for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_0038E618[];
extern int D_0038E600[];
extern int func_133A98(int value);
extern int func_133D58(unsigned int index);
extern int func_0A35F0(int index, int value);

int func_133EE8(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_0038E618[index].tail == 6)
        func_133A98(1);
    func_133D58(index);
    func_0A35F0(D_0038E600[index], 0);
    return 1;
}
