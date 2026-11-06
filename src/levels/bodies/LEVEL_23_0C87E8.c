struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_002FDF58[];
extern char D_002025C0[];
extern int D_001D7AFC;
extern struct Hdr *D_001C73AC;
extern int D_001D79E4;
extern char D_001D79E9[];

extern int func_0D0050(char *a);
extern void func_0226C8(int a, long b);
extern void func_022710(int a, long b);
extern int func_0C85A8(void);
extern int func_022AD8(int a);
extern void func_022B08(int a, int b, long c);
extern void func_021C60(char *a, int b);
extern void func_0C9238(void);

void func_0C87E8(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0D0050(D_002FDF58);
    func_0226C8(*(int *)(obj + 0x24), -1);
    func_022710(*(int *)(obj + 0x24), -1);
    value = func_0C85A8();
    ok = func_022AD8(value);
    D_001D7AFC = 0;
    {
        int *f = &D_001C73AC->field;
        *f = *f - D_001D79E4;
    }
    D_001D79E9[0] = 1;
    if (ok != 0) {
        func_022B08(*(int *)(obj + 0x24), value, -1);
        func_021C60(D_002025C0, *(int *)(obj + 0x24));
        func_0C9238();
    }
}
