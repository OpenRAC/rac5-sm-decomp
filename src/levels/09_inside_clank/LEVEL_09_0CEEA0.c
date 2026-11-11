/* LEVEL_09:0x0CEEA0 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001EE4FC;
extern int D_00314298[];
extern int func_0D64D0(int *set);
extern void func_0CEAE8(void *p);
extern void func_0CED28(void *p);

void func_0CEEA0(void)
{
    int a;
    int m;

    a = func_0D64D0(D_00314298);
    m = D_001EE4FC;
    switch (m) {
    case 0:
        func_0CEAE8((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0CED28((void *)a);
        } else {
            D_001EE4FC = 0;
        }
        break;
    }
}
