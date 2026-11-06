extern char D_001CC7F0[];
extern void func_094040(void *, void *, void *, int, int, int, void *);
extern void func_094218(void *);

void func_1CF238(void *first, void *second)
{
    char scratch[16];
    func_094040(scratch, first, D_001CC7F0, 56, 0, -1, second);
    func_094218(scratch);
}
