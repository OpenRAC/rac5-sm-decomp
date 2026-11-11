extern unsigned int D_001BE638[];
extern unsigned int D_001BE648;
extern unsigned int D_001BE64C;
void func_125FE8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int *entry = D_001BE638;
    unsigned int index = 0;
    do {
        *entry = third & 0xff;
        ++index;
        ++entry;
    } while (index < 2);
    D_001BE648 = first;
    D_001BE64C = second;
}