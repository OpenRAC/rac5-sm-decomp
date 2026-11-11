/* LEVEL_17:0x0C0828 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001A5BAC;
extern int D_0026BE98[];
extern int func_0C7E58(int *set);
extern void func_0C0470(void *p);
extern void func_0C06B0(void *p);

void func_0C0828(void)
{
    int a;
    int m;

    a = func_0C7E58(D_0026BE98);
    m = D_001A5BAC;
    switch (m) {
    case 0:
        func_0C0470((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0C06B0((void *)a);
        } else {
            D_001A5BAC = 0;
        }
        break;
    }
}
