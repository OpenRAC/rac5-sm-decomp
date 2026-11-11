struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_00342418[];
extern char D_0024AA40[];
extern int D_002189FC;
extern struct Hdr *D_002082AC;
extern int D_002188E4;
extern char D_002188E9[];

extern int func_0DB280(char *a);
extern void func_024BF0(int a, long b);
extern void func_024C38(int a, long b);
extern int func_0D37D8(void);
extern int func_025000(int a);
extern void func_025030(int a, int b, long c);
extern void func_023F18(char *a, int b);
extern void func_0D4468(void);

void func_0D3A18(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0DB280(D_00342418);
    func_024BF0(*(int *)(obj + 0x24), -1);
    func_024C38(*(int *)(obj + 0x24), -1);
    value = func_0D37D8();
    ok = func_025000(value);
    D_002189FC = 0;
    {
        int *f = &D_002082AC->field;
        *f = *f - D_002188E4;
    }
    D_002188E9[0] = 1;
    if (ok != 0) {
        func_025030(*(int *)(obj + 0x24), value, -1);
        func_023F18(D_0024AA40, *(int *)(obj + 0x24));
        func_0D4468();
    }
}
