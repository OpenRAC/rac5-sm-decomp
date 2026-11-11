struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_0037BD98[];
extern char D_002843D0[];
extern int D_0024D5BC;
extern struct Hdr *D_0023CB2C;
extern int D_0024D4A4;
extern char D_0024D4A9[];

extern int func_0E41F0(char *a);
extern void func_024EA8(int a, long b);
extern void func_024EF0(int a, long b);
extern int func_0DC720(void);
extern int func_0252B8(int a);
extern void func_0252E8(int a, int b, long c);
extern void func_0241D0(char *a, int b);
extern void func_0DD3B0(void);

void func_0DC960(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0E41F0(D_0037BD98);
    func_024EA8(*(int *)(obj + 0x24), -1);
    func_024EF0(*(int *)(obj + 0x24), -1);
    value = func_0DC720();
    ok = func_0252B8(value);
    D_0024D5BC = 0;
    {
        int *f = &D_0023CB2C->field;
        *f = *f - D_0024D4A4;
    }
    D_0024D4A9[0] = 1;
    if (ok != 0) {
        func_0252E8(*(int *)(obj + 0x24), value, -1);
        func_0241D0(D_002843D0, *(int *)(obj + 0x24));
        func_0DD3B0();
    }
}
