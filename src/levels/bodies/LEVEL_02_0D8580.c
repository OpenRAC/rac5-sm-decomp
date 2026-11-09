/* LEVEL_02:0x0D8580 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_002196BC;
extern int D_00344018[];
extern int func_0DFBB0(int *set);
extern void func_0D81C8(void *p);
extern void func_0D8408(void *p);

void func_0D8580(void)
{
    int a;
    int m;

    a = func_0DFBB0(D_00344018);
    m = D_002196BC;
    switch (m) {
    case 0:
        func_0D81C8((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0D8408((void *)a);
        } else {
            D_002196BC = 0;
        }
        break;
    }
}
