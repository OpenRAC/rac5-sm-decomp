typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_001779D8;
void func_079260(int first, int second)
{
    if (D_001779D8.disabled == 0) {
        if (D_001779D8.first < first)
            D_001779D8.first = first;
        if (D_001779D8.second < second)
            D_001779D8.second = second;
    }
}