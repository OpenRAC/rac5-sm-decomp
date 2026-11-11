typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_002DC638[];

int func_111778(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_002DC638[index].value == 7;
}