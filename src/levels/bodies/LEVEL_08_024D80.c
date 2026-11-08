typedef struct Record {
    int pad_00;
    int state;
    char pad_08[0x50];
} Record;

extern Record D_0023C158[];

Record *func_024D80(unsigned int index, int step)
{
    step++;
    if (index < 25) {
        if (step >= 0) {
            if (step < 2) {
                if (D_0023C158[step + index].state == 2)
                    return &D_0023C158[index] + step;
            }
        }
    }
    return 0;
}
