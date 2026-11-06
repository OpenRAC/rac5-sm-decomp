extern void func_172EF8(float, float, void *, void *, int);

void func_171A38(char *record)
{
    char scratch[16];
    char *nested = *(char **)(record + 0x58);
    func_172EF8(10.0f, 0.9f, scratch, record, *(int *)(nested + 4));
}
