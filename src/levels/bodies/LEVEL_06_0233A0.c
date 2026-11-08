typedef unsigned int u32;

extern int func_023210(void *, void *, u32, void *);
extern char *func_022D30(void *, void *);

int func_0233A0(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_023210(first, second, index, third)) {
            char *record = func_022D30(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
