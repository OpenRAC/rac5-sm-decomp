typedef unsigned int u32;

extern int func_025468(void *, void *, u32, void *);
extern char *func_024F88(void *, void *);

int func_0255F8(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_025468(first, second, index, third)) {
            char *record = func_024F88(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
