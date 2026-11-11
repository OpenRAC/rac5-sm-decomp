typedef struct {
    char earlier[0x3c];
    int value;
    char later[0x18];
} Entry;

extern Entry D_0020BC58[];

int func_024338(unsigned int first, unsigned int second, int index)
{
    index++;
    if (first < 25 && second < 8 && index >= 0 && index < 2) {
        D_0020BC58[index + first].value = second;
        return 1;
    }
    return 0;
}
