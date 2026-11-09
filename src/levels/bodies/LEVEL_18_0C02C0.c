/* LEVEL_18:0x0C02C0 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001B3A2C;
extern int D_0027AF18[];
extern int func_0C78F0(int *set);
extern void func_0BFF08(void *p);
extern void func_0C0148(void *p);

void func_0C02C0(void)
{
    int a;
    int m;

    a = func_0C78F0(D_0027AF18);
    m = D_001B3A2C;
    switch (m) {
    case 0:
        func_0BFF08((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0C0148((void *)a);
        } else {
            D_001B3A2C = 0;
        }
        break;
    }
}
