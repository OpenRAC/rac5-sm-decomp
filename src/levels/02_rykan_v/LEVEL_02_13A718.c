typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_003A5B18[];

int func_13A718(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_003A5B18[index].value == 7;
}