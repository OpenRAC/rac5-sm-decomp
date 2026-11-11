typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_0035FB58[];

int func_125AE0(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_0035FB58[index].value == 7;
}