/* LEVEL_10:0x131D68 -- placement copy of LEVEL_01_133EE8.c: for a valid slot below 6, closes the record when it is in state 6, clears it and resets its entry; returns whether the slot was valid. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern Rec D_00397A18[];
extern int D_00397A00[];
extern int func_131918(int value);
extern int func_131BD8(unsigned int index);
extern int func_0A4708(int index, int value);

int func_131D68(unsigned int index)
{
    if (index >= 6)
        return 0;
    if (D_00397A18[index].tail == 6)
        func_131918(1);
    func_131BD8(index);
    func_0A4708(D_00397A00[index], 0);
    return 1;
}
