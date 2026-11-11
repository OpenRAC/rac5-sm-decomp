extern unsigned int D_001A4CE4;
extern int D_001ECC80[];

int *func_06B430(int wanted)
{
    unsigned int index = 0;
    if (D_001A4CE4 != 0) {
        int *item = D_001ECC80;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001A4CE4);
    }
    return 0;
}
