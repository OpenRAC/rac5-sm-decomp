/* LEVEL_22:0x0C0130 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_00163A7C;
extern int D_002826D8[];
extern int func_0C7760(int *set);
extern void func_0BFD78(void *p);
extern void func_0BFFB8(void *p);

void func_0C0130(void)
{
    int a;
    int m;

    a = func_0C7760(D_002826D8);
    m = D_00163A7C;
    switch (m) {
    case 0:
        func_0BFD78((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0BFFB8((void *)a);
        } else {
            D_00163A7C = 0;
        }
        break;
    }
}
