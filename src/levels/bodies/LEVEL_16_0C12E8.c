/* LEVEL_16:0x0C12E8 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001B25AC;
extern int D_0027AB98[];
extern int func_0C8918(int *set);
extern void func_0C0F30(void *p);
extern void func_0C1170(void *p);

void func_0C12E8(void)
{
    int a;
    int m;

    a = func_0C8918(D_0027AB98);
    m = D_001B25AC;
    switch (m) {
    case 0:
        func_0C0F30((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0C1170((void *)a);
        } else {
            D_001B25AC = 0;
        }
        break;
    }
}
