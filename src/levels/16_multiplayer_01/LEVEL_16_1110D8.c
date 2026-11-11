typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_002DC4B8[];

int func_1110D8(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_002DC4B8[index].value == 7;
}