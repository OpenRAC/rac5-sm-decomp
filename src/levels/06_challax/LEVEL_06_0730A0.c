extern unsigned int D_001E5018;
extern int D_00227230[];

void func_0730A0(int wanted)
{
    unsigned int index = 0;
    if (D_001E5018 != 0) {
        int *item = D_00227230;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001E5018);
    }
}
