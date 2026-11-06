extern unsigned int D_001BD4C0[];
extern unsigned int D_001BD4D0;
extern unsigned int D_001BD4D4;
void func_125680(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int *entry = D_001BD4C0;
    unsigned int index = 0;
    do {
        *entry = third & 0xff;
        ++index;
        ++entry;
    } while (index < 2);
    D_001BD4D0 = first;
    D_001BD4D4 = second;
}