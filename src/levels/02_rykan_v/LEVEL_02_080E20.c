extern unsigned int D_0020B0D4;
extern int D_00251940[];

int *func_080E20(int wanted)
{
    unsigned int index = 0;
    if (D_0020B0D4 != 0) {
        int *item = D_00251940;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_0020B0D4);
    }
    return 0;
}
