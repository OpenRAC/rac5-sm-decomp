extern char D_001400A0[];
extern void func_087718(void *, void *, void *, int, int, int, void *);
extern void func_0878F0(void *);

void func_141BB0(void *first, void *second)
{
    char scratch[16];
    func_087718(scratch, first, D_001400A0, 72, 0, -1, second);
    func_0878F0(scratch);
}
