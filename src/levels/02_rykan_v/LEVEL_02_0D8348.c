struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_00344018[];
extern char D_0024C650[];
extern int D_002196BC;
extern struct Hdr *D_00208C2C;
extern int D_002195A4;
extern char D_002195A9[];

extern int func_0DFBB0(char *a);
extern void func_024F88(int a, long b);
extern void func_024FD0(int a, long b);
extern int func_0D8108(void);
extern int func_025398(int a);
extern void func_0253C8(int a, int b, long c);
extern void func_024418(char *a, int b);
extern void func_0D8D98(void);

void func_0D8348(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0DFBB0(D_00344018);
    func_024F88(*(int *)(obj + 0x24), -1);
    func_024FD0(*(int *)(obj + 0x24), -1);
    value = func_0D8108();
    ok = func_025398(value);
    D_002196BC = 0;
    {
        int *f = &D_00208C2C->field;
        *f = *f - D_002195A4;
    }
    D_002195A9[0] = 1;
    if (ok != 0) {
        func_0253C8(*(int *)(obj + 0x24), value, -1);
        func_024418(D_0024C650, *(int *)(obj + 0x24));
        func_0D8D98();
    }
}
