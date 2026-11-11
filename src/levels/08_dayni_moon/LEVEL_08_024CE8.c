typedef struct {
    char earlier[0x3c];
    int value;
    char later[0x18];
} Entry;

extern Entry D_0023C158[];

int func_024CE8(unsigned int first, unsigned int second, int index)
{
    index++;
    if (first < 25 && second < 8 && index >= 0 && index < 2) {
        D_0023C158[index + first].value = second;
        return 1;
    }
    return 0;
}
