/* LEVEL_01:0x0D1BF0 -- looks up a record, then acts on it according to a global mode word. */
extern int D_002046FC;
extern int D_0032CB18[];
extern int func_0D9220(int *set);
extern void func_0D1838(void *p);
extern void func_0D1A78(void *p);

void func_0D1BF0(void)
{
    int a;
    int m;

    a = func_0D9220(D_0032CB18);
    m = D_002046FC;
    switch (m) {
    case 0:
        func_0D1838((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0D1A78((void *)a);
        } else {
            D_002046FC = 0;
        }
        break;
    }
}
