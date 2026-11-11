typedef struct Record {
    int pad_00;
    int state;
    char pad_08[0x50];
} Record;

extern Record D_00152958[];

Record *func_01F338(unsigned int index, int step)
{
    step++;
    if (index < 25) {
        if (step >= 0) {
            if (step < 2) {
                if (D_00152958[step + index].state == 2)
                    return &D_00152958[index] + step;
            }
        }
    }
    return 0;
}
