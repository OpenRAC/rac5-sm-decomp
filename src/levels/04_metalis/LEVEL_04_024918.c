typedef unsigned int u32;

extern int func_024788(void *, void *, u32, void *);
extern char *func_0242A8(void *, void *);

int func_024918(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_024788(first, second, index, third)) {
            char *record = func_0242A8(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
