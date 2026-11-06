extern unsigned int D_001C9514;
extern int D_002078B0[];

int *func_071810(int wanted)
{
    unsigned int index = 0;
    if (D_001C9514 != 0) {
        int *item = D_002078B0;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001C9514);
    }
    return 0;
}
