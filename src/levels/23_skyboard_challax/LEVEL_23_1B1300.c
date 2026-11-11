extern char D_001AF7F0[];
extern void func_08C368(void *, void *, void *, int, int, int, void *);
extern void func_08C540(void *);

void func_1B1300(void *first, void *second)
{
    char scratch[16];
    func_08C368(scratch, first, D_001AF7F0, 72, 0, -1, second);
    func_08C540(scratch);
}
