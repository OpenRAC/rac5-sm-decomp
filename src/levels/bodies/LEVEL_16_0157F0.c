extern int D_001D04A0;
extern char *D_001A1AB4;

void func_026108(int);

void func_0157F0(void)
{
    int v = D_001D04A0;

    *(int *)(D_001A1AB4 + 0x1C6C) = v;
    *(char *)(D_001A1AB4 + 0x10513) = 0;
    func_026108(v);
}
