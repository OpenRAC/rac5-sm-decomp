typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_00288510;
void func_09DC28(int first, int second)
{
    if (D_00288510.disabled == 0) {
        if (D_00288510.first < first)
            D_00288510.first = first;
        if (D_00288510.second < second)
            D_00288510.second = second;
    }
}