struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_003189D8[];
extern char D_00220E40[];
extern int D_001F3A7C;
extern struct Hdr *D_001E332C;
extern int D_001F3964;
extern char D_001F3969[];

extern int func_0D77C8(char *a);
extern void func_0235C0(int a, long b);
extern void func_023608(int a, long b);
extern int func_0CFD20(void);
extern int func_0239D0(int a);
extern void func_023A00(int a, int b, long c);
extern void func_022A50(char *a, int b);
extern void func_0D09B0(void);

void func_0CFF60(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0D77C8(D_003189D8);
    func_0235C0(*(int *)(obj + 0x24), -1);
    func_023608(*(int *)(obj + 0x24), -1);
    value = func_0CFD20();
    ok = func_0239D0(value);
    D_001F3A7C = 0;
    {
        int *f = &D_001E332C->field;
        *f = *f - D_001F3964;
    }
    D_001F3969[0] = 1;
    if (ok != 0) {
        func_023A00(*(int *)(obj + 0x24), value, -1);
        func_022A50(D_00220E40, *(int *)(obj + 0x24));
        func_0D09B0();
    }
}
