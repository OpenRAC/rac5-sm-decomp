/* LEVEL_21:0x0B2230 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_0015937C;
extern int D_00244358[];
extern int func_0B9860(int *set);
extern void func_0B1E78(void *p);
extern void func_0B20B8(void *p);

void func_0B2230(void)
{
    int a;
    int m;

    a = func_0B9860(D_00244358);
    m = D_0015937C;
    switch (m) {
    case 0:
        func_0B1E78((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0B20B8((void *)a);
        } else {
            D_0015937C = 0;
        }
        break;
    }
}
