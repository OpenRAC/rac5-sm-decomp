/* FRONTEND:0x003C18 -- placement copy of LEVEL_01_024500.c. */
typedef struct Record {
    int pad_00;
    int state;
    char pad_08[0x50];
} Record;

extern Record D_0002A470[];

Record *func_003C18(unsigned int index, int step)
{
    step++;
    if (index < 25) {
        if (step >= 0) {
            if (step < 2) {
                if (D_0002A470[step + index].state == 2)
                    return &D_0002A470[index] + step;
            }
        }
    }
    return 0;
}
