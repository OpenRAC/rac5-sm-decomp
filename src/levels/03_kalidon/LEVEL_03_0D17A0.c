struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_00347998[];
extern char D_0024FFC0[];
extern int D_0021CD7C;
extern struct Hdr *D_0020C62C;
extern int D_0021CC64;
extern char D_0021CC69[];

extern int func_0D9008(char *a);
extern void func_0244F8(int a, long b);
extern void func_024540(int a, long b);
extern int func_0D1560(void);
extern int func_024908(int a);
extern void func_024938(int a, int b, long c);
extern void func_023820(char *a, int b);
extern void func_0D21F0(void);

void func_0D17A0(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0D9008(D_00347998);
    func_0244F8(*(int *)(obj + 0x24), -1);
    func_024540(*(int *)(obj + 0x24), -1);
    value = func_0D1560();
    ok = func_024908(value);
    D_0021CD7C = 0;
    {
        int *f = &D_0020C62C->field;
        *f = *f - D_0021CC64;
    }
    D_0021CC69[0] = 1;
    if (ok != 0) {
        func_024938(*(int *)(obj + 0x24), value, -1);
        func_023820(D_0024FFC0, *(int *)(obj + 0x24));
        func_0D21F0();
    }
}
