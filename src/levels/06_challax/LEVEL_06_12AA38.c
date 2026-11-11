typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_0037B398[];

int func_12AA38(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_0037B398[index].value == 7;
}