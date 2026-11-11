typedef unsigned int u32;

extern int func_023AA0(void *, void *, u32, void *);
extern char *func_0235C0(void *, void *);

int func_023C30(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_023AA0(first, second, index, third)) {
            char *record = func_0235C0(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
