typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_003A9498[];

int func_132730(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_003A9498[index].value == 7;
}