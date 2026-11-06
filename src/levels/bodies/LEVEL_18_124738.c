extern unsigned int D_001BE940[];
extern unsigned int D_001BE950;
extern unsigned int D_001BE954;
void func_124738(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int *entry = D_001BE940;
    unsigned int index = 0;
    do {
        *entry = third & 0xff;
        ++index;
        ++entry;
    } while (index < 2);
    D_001BE950 = first;
    D_001BE954 = second;
}