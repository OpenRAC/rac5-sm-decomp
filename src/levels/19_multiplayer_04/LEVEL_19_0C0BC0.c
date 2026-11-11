/* LEVEL_19:0x0C0BC0 -- placement copy of LEVEL_01_0D1BF0.c: looks up a record, then acts on it according to a global mode word. */
extern int D_001B372C;
extern int D_0027AD18[];
extern int func_0C81F0(int *set);
extern void func_0C0808(void *p);
extern void func_0C0A48(void *p);

void func_0C0BC0(void)
{
    int a;
    int m;

    a = func_0C81F0(D_0027AD18);
    m = D_001B372C;
    switch (m) {
    case 0:
        func_0C0808((void *)a);
        break;
    case 1:
        if (a != 0) {
            func_0C0A48((void *)a);
        } else {
            D_001B372C = 0;
        }
        break;
    }
}
