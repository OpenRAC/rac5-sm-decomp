typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_07C2C8(void *key);
extern void func_07C170(Head *);

void func_07C140(void *key)
{
    Head *value = func_07C2C8(key);
    if (value != 0)
        func_07C170(value);
}
