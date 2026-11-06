struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_00335F18[];
extern char D_0023E540[];
extern int D_0020D6FC;
extern struct Hdr *D_001FCFAC;
extern int D_0020D5E4;
extern char D_0020D5E9[];

extern int func_0DA660(char *a);
extern void func_023F90(int a, long b);
extern void func_023FD8(int a, long b);
extern int func_0D2BB8(void);
extern int func_0243A0(int a);
extern void func_0243D0(int a, int b, long c);
extern void func_0232B8(char *a, int b);
extern void func_0D3848(void);

void func_0D2DF8(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0DA660(D_00335F18);
    func_023F90(*(int *)(obj + 0x24), -1);
    func_023FD8(*(int *)(obj + 0x24), -1);
    value = func_0D2BB8();
    ok = func_0243A0(value);
    D_0020D6FC = 0;
    {
        int *f = &D_001FCFAC->field;
        *f = *f - D_0020D5E4;
    }
    D_0020D5E9[0] = 1;
    if (ok != 0) {
        func_0243D0(*(int *)(obj + 0x24), value, -1);
        func_0232B8(D_0023E540, *(int *)(obj + 0x24));
        func_0D3848();
    }
}
