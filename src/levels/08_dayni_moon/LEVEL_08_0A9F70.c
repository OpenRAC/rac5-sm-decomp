typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_002EB8D0;
void func_0A9F70(int first, int second)
{
    if (D_002EB8D0.disabled == 0) {
        if (D_002EB8D0.first < first)
            D_002EB8D0.first = first;
        if (D_002EB8D0.second < second)
            D_002EB8D0.second = second;
    }
}