typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_0660E8(void *key);
extern void func_065F90(Head *);

void func_065F60(void *key)
{
    Head *value = func_0660E8(key);
    if (value != 0)
        func_065F90(value);
}
