typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_0035A4D8[];

int func_129E68(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_0035A4D8[index].value == 7;
}