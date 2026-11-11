struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_0027AD18[];
extern char D_001E4210[];
extern int D_001B372C;
extern struct Hdr *D_001A2C34;
extern int D_001B3614;
extern char D_001B3619[];

extern int func_0C81F0(char *a);
extern char *func_021D08(int row, int column);
extern int func_021D50(unsigned int a0, int a1);
extern int func_0C0748(void);
extern int func_022040(int a);
extern void func_022070(int a, int b, long c);
extern void func_0210A8(char *a, int b);
extern void func_0C13D8(void);

void func_0C0988(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0C81F0(D_0027AD18);
    func_021D08(*(int *)(obj + 0x24), -1);
    func_021D50(*(int *)(obj + 0x24), -1);
    value = func_0C0748();
    ok = func_022040(value);
    D_001B372C = 0;
    {
        int *f = &D_001A2C34->field;
        *f = *f - D_001B3614;
    }
    D_001B3619[0] = 1;
    if (ok != 0) {
        func_022070(*(int *)(obj + 0x24), value, -1);
        func_0210A8(D_001E4210, *(int *)(obj + 0x24));
        func_0C13D8();
    }
}
