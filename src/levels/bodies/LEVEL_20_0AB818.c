/* LEVEL_20:0x0AB818 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_00114C8C;
extern int D_0019E3D8[];
extern int func_0B2E48(int *set);
extern void func_0AB460(void *p);
extern void func_0AB6A0(void *p);

void func_0AB818(void)
{
    int a;
    int m;

    a = func_0B2E48(D_0019E3D8);
    m = D_00114C8C;
    switch (m) {
    case 0:
        func_0AB460((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0AB6A0((void *)a);
        } else {
            D_00114C8C = 0;
        }
        break;
    }
}
