extern unsigned int D_001A3B64;
extern int D_001ECB00[];

int *func_06B358(int wanted)
{
    unsigned int index = 0;
    if (D_001A3B64 != 0) {
        int *item = D_001ECB00;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001A3B64);
    }
    return 0;
}
