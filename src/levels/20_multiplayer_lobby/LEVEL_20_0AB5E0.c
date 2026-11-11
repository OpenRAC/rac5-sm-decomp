struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_0019E3D8[];
extern char D_0013BA10[];
extern int D_00114C8C;
extern struct Hdr *D_00104194;
extern int D_00114B74;
extern char D_00114B79[];

extern int func_0B2E48(char *a);
extern char *func_01EDC8(int row, int column);
extern int func_01EE10(unsigned int a0, int a1);
extern int func_0AB3A0(void);
extern int func_01F100(int a);
extern void func_01F130(int a, int b, long c);
extern void func_01E288(char *a, int b);
extern void func_0AC030(void);

void func_0AB5E0(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0B2E48(D_0019E3D8);
    func_01EDC8(*(int *)(obj + 0x24), -1);
    func_01EE10(*(int *)(obj + 0x24), -1);
    value = func_0AB3A0();
    ok = func_01F100(value);
    D_00114C8C = 0;
    {
        int *f = &D_00104194->field;
        *f = *f - D_00114B74;
    }
    D_00114B79[0] = 1;
    if (ok != 0) {
        func_01F130(*(int *)(obj + 0x24), value, -1);
        func_01E288(D_0013BA10, *(int *)(obj + 0x24));
        func_0AC030();
    }
}
