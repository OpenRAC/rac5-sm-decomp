struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_00319898[];
extern char D_00221EC0[];
extern int D_001F35FC;
extern struct Hdr *D_001E2EAC;
extern int D_001F34E4;
extern char D_001F34E9[];

extern int func_0D3B20(char *a);
extern void func_022D30(int a, long b);
extern void func_022D78(int a, long b);
extern int func_0CC078(void);
extern int func_023140(int a);
extern void func_023170(int a, int b, long c);
extern void func_022058(char *a, int b);
extern void func_0CCD08(void);

void func_0CC2B8(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0D3B20(D_00319898);
    func_022D30(*(int *)(obj + 0x24), -1);
    func_022D78(*(int *)(obj + 0x24), -1);
    value = func_0CC078();
    ok = func_023140(value);
    D_001F35FC = 0;
    {
        int *f = &D_001E2EAC->field;
        *f = *f - D_001F34E4;
    }
    D_001F34E9[0] = 1;
    if (ok != 0) {
        func_023170(*(int *)(obj + 0x24), value, -1);
        func_022058(D_00221EC0, *(int *)(obj + 0x24));
        func_0CCD08();
    }
}
