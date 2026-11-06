extern unsigned int D_001C6D94;
extern int D_00206330[];

int *func_074CA0(int wanted)
{
    unsigned int index = 0;
    if (D_001C6D94 != 0) {
        int *item = D_00206330;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001C6D94);
    }
    return 0;
}
