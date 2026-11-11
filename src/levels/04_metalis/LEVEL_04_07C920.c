extern unsigned int D_0020F5D8;
extern int D_00254CC0[];

void func_07C920(int wanted)
{
    unsigned int index = 0;
    if (D_0020F5D8 != 0) {
        int *item = D_00254CC0;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_0020F5D8);
    }
}
