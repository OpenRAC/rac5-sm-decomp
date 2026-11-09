/* LEVEL_06:0x0CC4F0 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001F35FC;
extern int D_00319898[];
extern int func_0D3B20(int *set);
extern void func_0CC138(void *p);
extern void func_0CC378(void *p);

void func_0CC4F0(void)
{
    int a;
    int m;

    a = func_0D3B20(D_00319898);
    m = D_001F35FC;
    switch (m) {
    case 0:
        func_0CC138((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0CC378((void *)a);
        } else {
            D_001F35FC = 0;
        }
        break;
    }
}
