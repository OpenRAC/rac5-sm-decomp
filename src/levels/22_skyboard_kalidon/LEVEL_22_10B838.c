typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_002E40F8[];

int func_10B838(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_002E40F8[index].value == 7;
}