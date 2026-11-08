typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_0751B0(void *key);
extern void func_075058(Head *);

void func_075028(void *key)
{
    Head *value = func_0751B0(key);
    if (value != 0)
        func_075058(value);
}
