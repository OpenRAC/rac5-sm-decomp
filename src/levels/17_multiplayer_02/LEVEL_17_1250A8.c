extern unsigned int D_001B0AB8[];
extern unsigned int D_001B0AC8;
extern unsigned int D_001B0ACC;
void func_1250A8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int *entry = D_001B0AB8;
    unsigned int index = 0;
    do {
        *entry = third & 0xff;
        ++index;
        ++entry;
    } while (index < 2);
    D_001B0AC8 = first;
    D_001B0ACC = second;
}