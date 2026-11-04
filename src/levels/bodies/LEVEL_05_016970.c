extern int D_002096F0;
extern char *D_001E332C;

void func_0274A8(int);

void func_016970(void)
{
    int v = D_002096F0;

    *(int *)(D_001E332C + 0x1C6C) = v;
    *(char *)(D_001E332C + 0x10513) = 0;
    func_0274A8(v);
}
