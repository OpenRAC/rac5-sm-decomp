typedef unsigned int u32;

extern int func_023E00(void *, void *, u32, void *);
extern char *func_023920(void *, void *);

int func_023F90(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_023E00(first, second, index, third)) {
            char *record = func_023920(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
