extern char *D_001870B4;
extern char D_001858B0[];
extern void func_020FD0(void *, int, int);

void func_06E708(char *record)
{
    D_001870B4 = record;
    func_020FD0(D_001858B0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
