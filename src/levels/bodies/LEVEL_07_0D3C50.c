/* LEVEL_07:0x0D3C50 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_002189FC;
extern int D_00342418[];
extern int func_0DB280(int *set);
extern void func_0D3898(void *p);
extern void func_0D3AD8(void *p);

void func_0D3C50(void)
{
    int a;
    int m;

    a = func_0DB280(D_00342418);
    m = D_002189FC;
    switch (m) {
    case 0:
        func_0D3898((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0D3AD8((void *)a);
        } else {
            D_002189FC = 0;
        }
        break;
    }
}
