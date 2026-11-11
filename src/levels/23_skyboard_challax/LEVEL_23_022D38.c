typedef unsigned int u32;

extern int func_022BA8(void *, void *, u32, void *);
extern char *func_0226C8(void *, void *);

int func_022D38(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_022BA8(first, second, index, third)) {
            char *record = func_0226C8(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
