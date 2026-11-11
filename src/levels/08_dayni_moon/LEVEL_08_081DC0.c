extern unsigned int D_0023EFD4;
extern int D_002896C0[];

int *func_081DC0(int wanted)
{
    unsigned int index = 0;
    if (D_0023EFD4 != 0) {
        int *item = D_002896C0;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_0023EFD4);
    }
    return 0;
}
