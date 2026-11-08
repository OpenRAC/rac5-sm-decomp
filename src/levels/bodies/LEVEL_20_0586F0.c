typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_058878(void *key);
extern void func_058720(Head *);

void func_0586F0(void *key)
{
    Head *value = func_058878(key);
    if (value != 0)
        func_058720(value);
}
