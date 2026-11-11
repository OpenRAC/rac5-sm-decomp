extern unsigned int D_0020F5D4;
extern int D_00254C40[];

int *func_07D240(int wanted)
{
    unsigned int index = 0;
    if (D_0020F5D4 != 0) {
        int *item = D_00254C40;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_0020F5D4);
    }
    return 0;
}
