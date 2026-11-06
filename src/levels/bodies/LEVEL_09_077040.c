extern unsigned int D_001DFF14;
extern int D_00221BB0[];

int *func_077040(int wanted)
{
    unsigned int index = 0;
    if (D_001DFF14 != 0) {
        int *item = D_00221BB0;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001DFF14);
    }
    return 0;
}
