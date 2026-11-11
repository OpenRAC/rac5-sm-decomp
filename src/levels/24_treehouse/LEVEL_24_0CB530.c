/* LEVEL_24:0x0CB530 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001D537C;
extern int D_002F89D8[];
extern int func_0D2B88(int *set);
extern void func_0CB178(void *p);
extern void func_0CB3B8(void *p);

void func_0CB530(void)
{
    int a;
    int m;

    a = func_0D2B88(D_002F89D8);
    m = D_001D537C;
    switch (m) {
    case 0:
        func_0CB178((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0CB3B8((void *)a);
        } else {
            D_001D537C = 0;
        }
        break;
    }
}
