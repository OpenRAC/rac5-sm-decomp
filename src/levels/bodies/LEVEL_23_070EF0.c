extern unsigned int D_001C9518;
extern int D_00207930[];

void func_070EF0(int wanted)
{
    unsigned int index = 0;
    if (D_001C9518 != 0) {
        int *item = D_00207930;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001C9518);
    }
}
