typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_003DD898[];

int func_1458A0(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_003DD898[index].value == 7;
}