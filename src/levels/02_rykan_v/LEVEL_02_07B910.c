typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_07BA98(void *key);
extern void func_07B940(Head *);

void func_07B910(void *key)
{
    Head *value = func_07BA98(key);
    if (value != 0)
        func_07B940(value);
}
