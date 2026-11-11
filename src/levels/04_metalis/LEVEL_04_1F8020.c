extern char D_001F6510[];
extern void func_099A40(void *, void *, void *, int, int, int, void *);
extern void func_099C18(void *);

void func_1F8020(void *first, void *second)
{
    char scratch[16];
    func_099A40(scratch, first, D_001F6510, 72, 0, -1, second);
    func_099C18(scratch);
}
