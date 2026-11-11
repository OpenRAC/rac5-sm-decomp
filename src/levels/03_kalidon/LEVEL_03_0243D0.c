typedef struct Record {
    int pad_00;
    int state;
    char pad_08[0x50];
} Record;

extern Record D_0020BC58[];

Record *func_0243D0(unsigned int index, int step)
{
    step++;
    if (index < 25) {
        if (step >= 0) {
            if (step < 2) {
                if (D_0020BC58[step + index].state == 2)
                    return &D_0020BC58[index] + step;
            }
        }
    }
    return 0;
}
