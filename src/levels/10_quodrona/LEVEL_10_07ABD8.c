extern unsigned int D_001FF114;
extern int D_00243830[];

int *func_07ABD8(int wanted)
{
    unsigned int index = 0;
    if (D_001FF114 != 0) {
        int *item = D_00243830;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001FF114);
    }
    return 0;
}
