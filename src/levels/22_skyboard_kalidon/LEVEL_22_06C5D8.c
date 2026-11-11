extern unsigned int D_00155498;
extern int D_0018C0B0[];

void func_06C5D8(int wanted)
{
    unsigned int index = 0;
    if (D_00155498 != 0) {
        int *item = D_0018C0B0;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_00155498);
    }
}
