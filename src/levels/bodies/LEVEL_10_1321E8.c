typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_00397A18[];

int func_1321E8(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_00397A18[index].value == 7;
}