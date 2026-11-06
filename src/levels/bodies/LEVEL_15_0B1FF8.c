struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_00244358[];
extern char D_0017D2C0[];
extern int D_0015937C;
extern struct Hdr *D_00148C2C;
extern int D_00159264;
extern char D_00159269[];

extern int func_0B9860(char *a);
extern void func_01E990(int a, long b);
extern void func_01E9D8(int a, long b);
extern int func_0B1DB8(void);
extern int func_01EDA0(int a);
extern void func_01EDD0(int a, int b, long c);
extern void func_01DF40(char *a, int b);
extern void func_0B2A48(void);

void func_0B1FF8(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0B9860(D_00244358);
    func_01E990(*(int *)(obj + 0x24), -1);
    func_01E9D8(*(int *)(obj + 0x24), -1);
    value = func_0B1DB8();
    ok = func_01EDA0(value);
    D_0015937C = 0;
    {
        int *f = &D_00148C2C->field;
        *f = *f - D_00159264;
    }
    D_00159269[0] = 1;
    if (ok != 0) {
        func_01EDD0(*(int *)(obj + 0x24), value, -1);
        func_01DF40(D_0017D2C0, *(int *)(obj + 0x24));
        func_0B2A48();
    }
}
