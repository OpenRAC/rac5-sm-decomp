/* LEVEL_03:0x0D19D8 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_0021CD7C;
extern int D_00347998[];
extern int func_0D9008(int *set);
extern void func_0D1620(void *p);
extern void func_0D1860(void *p);

void func_0D19D8(void)
{
    int a;
    int m;

    a = func_0D9008(D_00347998);
    m = D_0021CD7C;
    switch (m) {
    case 0:
        func_0D1620((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0D1860((void *)a);
        } else {
            D_0021CD7C = 0;
        }
        break;
    }
}
