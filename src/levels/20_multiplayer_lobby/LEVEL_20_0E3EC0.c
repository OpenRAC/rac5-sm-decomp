typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_001FFA18[];

int func_0E3EC0(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_001FFA18[index].value == 7;
}