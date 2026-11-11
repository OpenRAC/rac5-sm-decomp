typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_0668A8(void *key);
extern void func_066750(Head *);

void func_066720(void *key)
{
    Head *value = func_0668A8(key);
    if (value != 0)
        func_066750(value);
}
