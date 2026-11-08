typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_0662D8(void *key);
extern void func_066180(Head *);

void func_066150(void *key)
{
    Head *value = func_0662D8(key);
    if (value != 0)
        func_066180(value);
}
