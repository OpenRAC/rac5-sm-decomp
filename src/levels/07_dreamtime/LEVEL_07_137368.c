typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_003A3F18[];

int func_137368(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_003A3F18[index].value == 7;
}