typedef struct {
    char earlier[0x3c];
    int value;
    char later[0x18];
} Entry;

extern Entry D_00148258[];

int func_01E7D0(unsigned int first, unsigned int second, int index)
{
    index++;
    if (first < 25 && second < 8 && index >= 0 && index < 2) {
        D_00148258[index + first].value = second;
        return 1;
    }
    return 0;
}
