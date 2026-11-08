typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern void *func_074FA0(void *key);
extern void func_074E48(Head *);

void func_074E18(void *key)
{
    Head *value = func_074FA0(key);
    if (value != 0)
        func_074E48(value);
}
