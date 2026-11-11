extern unsigned int D_00155494;
extern int D_0018C030[];

int *func_06CEF8(int wanted)
{
    unsigned int index = 0;
    if (D_00155494 != 0) {
        int *item = D_0018C030;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_00155494);
    }
    return 0;
}
