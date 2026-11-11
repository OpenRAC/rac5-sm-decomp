/* LEVEL_10:0x0D3030 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_0020D6FC;
extern int D_00335F18[];
extern int func_0DA660(int *set);
extern void func_0D2C78(void *p);
extern void func_0D2EB8(void *p);

void func_0D3030(void)
{
    int a;
    int m;

    a = func_0DA660(D_00335F18);
    m = D_0020D6FC;
    switch (m) {
    case 0:
        func_0D2C78((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0D2EB8((void *)a);
        } else {
            D_0020D6FC = 0;
        }
        break;
    }
}
