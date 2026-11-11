typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_002DC838[];

int func_10FD88(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_002DC838[index].value == 7;
}