typedef unsigned int u32;

extern int func_01F940(void *, void *, u32, void *);
extern char *func_01F460(void *, void *);

int func_01FAD0(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_01F940(first, second, index, third)) {
            char *record = func_01F460(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
