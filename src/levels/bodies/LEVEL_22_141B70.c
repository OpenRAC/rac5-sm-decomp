extern char D_0013F128[];
extern void func_087718(void *, void *, void *, int, int, int, void *);
extern void func_0878F0(void *);

void func_141B70(void *first, void *second)
{
    char scratch[16];
    func_087718(scratch, first, D_0013F128, 56, 0, -1, second);
    func_0878F0(scratch);
}
