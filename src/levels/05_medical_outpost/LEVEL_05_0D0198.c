/* LEVEL_05:0x0D0198 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001F3A7C;
extern int D_003189D8[];
extern int func_0D77C8(int *set);
extern void func_0CFDE0(void *p);
extern void func_0D0020(void *p);

void func_0D0198(void)
{
    int a;
    int m;

    a = func_0D77C8(D_003189D8);
    m = D_001F3A7C;
    switch (m) {
    case 0:
        func_0CFDE0((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0D0020((void *)a);
        } else {
            D_001F3A7C = 0;
        }
        break;
    }
}
