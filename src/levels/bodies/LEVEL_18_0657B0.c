typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_065938(void *key);
extern void func_0657E0(Head *);

void func_0657B0(void *key)
{
    Head *value = func_065938(key);
    if (value != 0)
        func_0657E0(value);
}
