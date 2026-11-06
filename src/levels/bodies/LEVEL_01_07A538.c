extern unsigned int D_001F6114;
extern int D_0023A430[];

int *func_07A538(int wanted)
{
    unsigned int index = 0;
    if (D_001F6114 != 0) {
        int *item = D_0023A430;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001F6114);
    }
    return 0;
}
