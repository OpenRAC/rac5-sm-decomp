typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_002A5998[];

int func_0F3230(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_002A5998[index].value == 7;
}