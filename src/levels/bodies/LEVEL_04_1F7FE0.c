extern char D_001F5598[];
extern void func_099A40(void *, void *, void *, int, int, int, void *);
extern void func_099C18(void *);

void func_1F7FE0(void *first, void *second)
{
    char scratch[16];
    func_099A40(scratch, first, D_001F5598, 56, 0, -1, second);
    func_099C18(scratch);
}
