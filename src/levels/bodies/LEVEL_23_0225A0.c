typedef struct Record {
    int pad_00;
    int state;
    char pad_08[0x50];
} Record;

extern Record D_001C69D8[];

Record *func_0225A0(unsigned int index, int step)
{
    step++;
    if (index < 25) {
        if (step >= 0) {
            if (step < 2) {
                if (D_001C69D8[step + index].state == 2)
                    return &D_001C69D8[index] + step;
            }
        }
    }
    return 0;
}
