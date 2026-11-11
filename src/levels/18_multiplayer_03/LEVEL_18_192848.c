extern char D_00190D38[];
extern void func_086E78(void *, void *, void *, int, int, int, void *);
extern void func_087050(void *);

void func_192848(void *first, void *second)
{
    char scratch[16];
    func_086E78(scratch, first, D_00190D38, 72, 0, -1, second);
    func_087050(scratch);
}
