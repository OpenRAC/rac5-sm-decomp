typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_0741E8(void *key);
extern void func_074090(Head *);

void func_074060(void *key)
{
    Head *value = func_0741E8(key);
    if (value != 0)
        func_074090(value);
}
