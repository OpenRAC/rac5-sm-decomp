extern unsigned int D_001E5014;
extern int D_002271B0[];

int *func_0739C0(int wanted)
{
    unsigned int index = 0;
    if (D_001E5014 != 0) {
        int *item = D_002271B0;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001E5014);
    }
    return 0;
}
