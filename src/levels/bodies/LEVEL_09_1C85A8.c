extern char D_001C5B60[];
extern void func_0930A0(void *, void *, void *, int, int, int, void *);
extern void func_093278(void *);

void func_1C85A8(void *first, void *second)
{
    char scratch[16];
    func_0930A0(scratch, first, D_001C5B60, 56, 0, -1, second);
    func_093278(scratch);
}
