typedef unsigned int u32;

extern int func_0250D0(void *, void *, u32, void *);
extern char *func_024BF0(void *, void *);

int func_025260(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_0250D0(first, second, index, third)) {
            char *record = func_024BF0(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
