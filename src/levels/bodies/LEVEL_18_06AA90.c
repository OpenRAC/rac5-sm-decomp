extern unsigned int D_001A4FE4;
extern int D_001ECE80[];

int *func_06AA90(int wanted)
{
    unsigned int index = 0;
    if (D_001A4FE4 != 0) {
        int *item = D_001ECE80;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001A4FE4);
    }
    return 0;
}
