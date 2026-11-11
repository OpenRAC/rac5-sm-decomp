extern unsigned int D_001DFF18;
extern int D_00221C30[];

void func_076720(int wanted)
{
    unsigned int index = 0;
    if (D_001DFF18 != 0) {
        int *item = D_00221C30;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001DFF18);
    }
}
