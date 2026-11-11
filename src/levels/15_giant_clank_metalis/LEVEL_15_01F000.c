typedef unsigned int u32;

extern int func_01EE70(void *, void *, u32, void *);
extern char *func_01E990(void *, void *);

int func_01F000(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_01EE70(first, second, index, third)) {
            char *record = func_01E990(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
