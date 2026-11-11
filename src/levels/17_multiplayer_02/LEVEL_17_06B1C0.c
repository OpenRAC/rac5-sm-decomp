extern unsigned int D_00197168;
extern int D_001DDE80[];

void func_06B1C0(int wanted)
{
    unsigned int index = 0;
    if (D_00197168 != 0) {
        int *item = D_001DDE80;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_00197168);
    }
}
