extern char D_00182EE0[];
extern void func_087F70(void *, void *, void *, int, int, int, void *);
extern void func_088148(void *);

void func_1849F0(void *first, void *second)
{
    char scratch[16];
    func_087F70(scratch, first, D_00182EE0, 72, 0, -1, second);
    func_088148(scratch);
}
