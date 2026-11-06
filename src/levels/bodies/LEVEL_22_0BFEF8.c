struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_002826D8[];
extern char D_00186D40[];
extern int D_00163A7C;
extern struct Hdr *D_0015332C;
extern int D_00163964;
extern char D_00163969[];

extern int func_0C7760(char *a);
extern void func_01F460(int a, long b);
extern void func_01F4A8(int a, long b);
extern int func_0BFCB8(void);
extern int func_01F870(int a);
extern void func_01F8A0(int a, int b, long c);
extern void func_01E9F8(char *a, int b);
extern void func_0C0948(void);

void func_0BFEF8(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0C7760(D_002826D8);
    func_01F460(*(int *)(obj + 0x24), -1);
    func_01F4A8(*(int *)(obj + 0x24), -1);
    value = func_0BFCB8();
    ok = func_01F870(value);
    D_00163A7C = 0;
    {
        int *f = &D_0015332C->field;
        *f = *f - D_00163964;
    }
    D_00163969[0] = 1;
    if (ok != 0) {
        func_01F8A0(*(int *)(obj + 0x24), value, -1);
        func_01E9F8(D_00186D40, *(int *)(obj + 0x24));
        func_0C0948();
    }
}
