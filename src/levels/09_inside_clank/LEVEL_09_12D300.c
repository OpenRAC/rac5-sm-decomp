typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_00375D98[];

int func_12D300(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_00375D98[index].value == 7;
}