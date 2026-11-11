extern unsigned int D_0020E794;
extern int D_002552B0[];

int *func_07A330(int wanted)
{
    unsigned int index = 0;
    if (D_0020E794 != 0) {
        int *item = D_002552B0;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_0020E794);
    }
    return 0;
}
