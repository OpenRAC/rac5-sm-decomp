/* LEVEL_08:0x0DCB98 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_0024D5BC;
extern int D_0037BD98[];
extern int func_0E41F0(int *set);
extern void func_0DC7E0(void *p);
extern void func_0DCA20(void *p);

void func_0DCB98(void)
{
    int a;
    int m;

    a = func_0E41F0(D_0037BD98);
    m = D_0024D5BC;
    switch (m) {
    case 0:
        func_0DC7E0((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0DCA20((void *)a);
        } else {
            D_0024D5BC = 0;
        }
        break;
    }
}
