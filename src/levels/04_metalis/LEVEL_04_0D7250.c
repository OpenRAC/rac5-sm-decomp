struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_00347318[];
extern char D_0024F950[];
extern int D_0021DBBC;
extern struct Hdr *D_0020D12C;
extern int D_0021DAA4;
extern char D_0021DAA9[];

extern int func_0DEAE0(char *a);
extern void func_0242A8(int a, long b);
extern void func_0242F0(int a, long b);
extern int func_0D7010(void);
extern int func_0246B8(int a);
extern void func_0246E8(int a, int b, long c);
extern void func_023738(char *a, int b);
extern void func_0D7CA0(void);

void func_0D7250(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0DEAE0(D_00347318);
    func_0242A8(*(int *)(obj + 0x24), -1);
    func_0242F0(*(int *)(obj + 0x24), -1);
    value = func_0D7010();
    ok = func_0246B8(value);
    D_0021DBBC = 0;
    {
        int *f = &D_0020D12C->field;
        *f = *f - D_0021DAA4;
    }
    D_0021DAA9[0] = 1;
    if (ok != 0) {
        func_0246E8(*(int *)(obj + 0x24), value, -1);
        func_023738(D_0024F950, *(int *)(obj + 0x24));
        func_0D7CA0();
    }
}
