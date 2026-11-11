/* LEVEL_04:0x0D7488 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_0021DBBC;
extern int D_00347318[];
extern int func_0DEAE0(int *set);
extern void func_0D70D0(void *p);
extern void func_0D7310(void *p);

void func_0D7488(void)
{
    int a;
    int m;

    a = func_0DEAE0(D_00347318);
    m = D_0021DBBC;
    switch (m) {
    case 0:
        func_0D70D0((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0D7310((void *)a);
        } else {
            D_0021DBBC = 0;
        }
        break;
    }
}
