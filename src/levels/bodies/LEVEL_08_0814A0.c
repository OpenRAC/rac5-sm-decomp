extern unsigned int D_0023EFD8;
extern int D_00289740[];

void func_0814A0(int wanted)
{
    unsigned int index = 0;
    if (D_0023EFD8 != 0) {
        int *item = D_00289740;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_0023EFD8);
    }
}
