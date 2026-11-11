extern unsigned int D_001A3B68;
extern int D_001ECB80[];

void func_06AB18(int wanted)
{
    unsigned int index = 0;
    if (D_001A3B68 != 0) {
        int *item = D_001ECB80;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001A3B68);
    }
}
