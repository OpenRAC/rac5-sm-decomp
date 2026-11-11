struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_0026BE98[];
extern char D_001D5390[];
extern int D_001A5BAC;
extern struct Hdr *D_001950B4;
extern int D_001A5A94;
extern char D_001A5A99[];

extern int func_0C7E58(char *a);
extern char *func_021A48(int row, int column);
extern int func_021A90(unsigned int a0, int a1);
extern int func_0C03B0(void);
extern int func_021D80(int a);
extern void func_021DB0(int a, int b, long c);
extern void func_020DE8(char *a, int b);
extern void func_0C1040(void);

void func_0C05F0(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0C7E58(D_0026BE98);
    func_021A48(*(int *)(obj + 0x24), -1);
    func_021A90(*(int *)(obj + 0x24), -1);
    value = func_0C03B0();
    ok = func_021D80(value);
    D_001A5BAC = 0;
    {
        int *f = &D_001950B4->field;
        *f = *f - D_001A5A94;
    }
    D_001A5A99[0] = 1;
    if (ok != 0) {
        func_021DB0(*(int *)(obj + 0x24), value, -1);
        func_020DE8(D_001D5390, *(int *)(obj + 0x24));
        func_0C1040();
    }
}
