typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_002B3B50;
void func_0A5F60(int first, int second)
{
    if (D_002B3B50.disabled == 0) {
        if (D_002B3B50.first < first)
            D_002B3B50.first = first;
        if (D_002B3B50.second < second)
            D_002B3B50.second = second;
    }
}