extern char D_0018FDC0[];
extern void func_086E78(void *, void *, void *, int, int, int, void *);
extern void func_087050(void *);

void func_192808(void *first, void *second)
{
    char scratch[16];
    func_086E78(scratch, first, D_0018FDC0, 56, 0, -1, second);
    func_087050(scratch);
}
