extern unsigned int D_001C6D98;
extern int D_002063B0[];

void func_074380(int wanted)
{
    unsigned int index = 0;
    if (D_001C6D98 != 0) {
        int *item = D_002063B0;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001C6D98);
    }
}
