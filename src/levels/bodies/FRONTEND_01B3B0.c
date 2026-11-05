extern char *D_00027E9C;
extern int D_00030574;
extern char D_00001818[];
void func_022840(int, const void *);

void func_01B3B0(int value)
{
    *(int *)(D_00027E9C + 0x1C6C) = 0;
    D_00030574 = value;
    func_022840(0, D_00001818);
}
