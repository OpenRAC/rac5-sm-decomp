struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_002F89D8[];
extern char D_00201040[];
extern int D_001D537C;
extern struct Hdr *D_001C4C2C;
extern int D_001D5264;
extern char D_001D5269[];

extern int func_0D2B88(char *a);
extern void func_022400(int a, long b);
extern void func_022448(int a, long b);
extern int func_0CB0B8(void);
extern int func_022810(int a);
extern void func_022840(int a, int b, long c);
extern void func_021830(char *a, int b);
extern void func_0CBD48(void);

void func_0CB2F8(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0D2B88(D_002F89D8);
    func_022400(*(int *)(obj + 0x24), -1);
    func_022448(*(int *)(obj + 0x24), -1);
    value = func_0CB0B8();
    ok = func_022810(value);
    D_001D537C = 0;
    {
        int *f = &D_001C4C2C->field;
        *f = *f - D_001D5264;
    }
    D_001D5269[0] = 1;
    if (ok != 0) {
        func_022840(*(int *)(obj + 0x24), value, -1);
        func_021830(D_00201040, *(int *)(obj + 0x24));
        func_0CBD48();
    }
}
