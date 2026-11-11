extern unsigned int D_001E5498;
extern int D_00226370[];

void func_077310(int wanted)
{
    unsigned int index = 0;
    if (D_001E5498 != 0) {
        int *item = D_00226370;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001E5498);
    }
}
