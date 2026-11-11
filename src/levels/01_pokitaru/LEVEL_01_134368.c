typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_0038E618[];

int func_134368(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_0038E618[index].value == 7;
}