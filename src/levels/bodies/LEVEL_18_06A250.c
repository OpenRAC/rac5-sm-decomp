extern unsigned int D_001A4FE8;
extern int D_001ECF00[];

void func_06A250(int wanted)
{
    unsigned int index = 0;
    if (D_001A4FE8 != 0) {
        int *item = D_001ECF00;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001A4FE8);
    }
}
