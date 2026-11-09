/* LEVEL_23:0x0C8A20 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001D7AFC;
extern int D_002FDF58[];
extern int func_0D0050(int *set);
extern void func_0C8668(void *p);
extern void func_0C88A8(void *p);

void func_0C8A20(void)
{
    int a;
    int m;

    a = func_0D0050(D_002FDF58);
    m = D_001D7AFC;
    switch (m) {
    case 0:
        func_0C8668((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0C88A8((void *)a);
        } else {
            D_001D7AFC = 0;
        }
        break;
    }
}
