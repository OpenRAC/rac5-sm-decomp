extern char *D_00248434;
extern char D_00246C30[];
extern void func_0268C0(void *, int, int);

void func_08A3F8(char *record)
{
    D_00248434 = record;
    func_0268C0(D_00246C30, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
