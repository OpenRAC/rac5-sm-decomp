typedef unsigned int u32;

extern int func_024B08(void *, void *, u32, void *);
extern char *func_024628(void *, void *);

int func_024C98(void *first, void *second, void *third)
{
    u32 index;
    for (index = 0; index < 3; index++) {
        if (func_024B08(first, second, index, third)) {
            char *record = func_024628(first, third);
            return ((unsigned char *)record + index)[0x4c] != 0;
        }
    }
    return 0;
}
