struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_0027AB98[];
extern char D_001E4090[];
extern int D_001B25AC;
extern struct Hdr *D_001A1AB4;
extern int D_001B2494;
extern char D_001B2499[];

extern int func_0C8918(char *a);
extern void func_0220C8(int a, long b);
extern int func_022110(unsigned int a0, int a1);
extern int func_0C0E70(void);
extern int func_022400(int a);
extern void func_022430(int a, int b, long c);
extern void func_021468(char *a, int b);
extern void func_0C1B00(void);

void func_0C10B0(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0C8918(D_0027AB98);
    func_0220C8(*(int *)(obj + 0x24), -1);
    func_022110(*(int *)(obj + 0x24), -1);
    value = func_0C0E70();
    ok = func_022400(value);
    D_001B25AC = 0;
    {
        int *f = &D_001A1AB4->field;
        *f = *f - D_001B2494;
    }
    D_001B2499[0] = 1;
    if (ok != 0) {
        func_022430(*(int *)(obj + 0x24), value, -1);
        func_021468(D_001E4090, *(int *)(obj + 0x24));
        func_0C1B00();
    }
}
