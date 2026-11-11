struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_0027AF18[];
extern char D_001E4410[];
extern int D_001B3A2C;
extern struct Hdr *D_001A2F34;
extern int D_001B3914;
extern char D_001B3919[];

extern int func_0C78F0(char *a);
extern char *func_021710(int row, int column);
extern int func_021758(unsigned int a0, int a1);
extern int func_0BFE48(void);
extern int func_021A48(int a);
extern void func_021A78(int a, int b, long c);
extern void func_020AB0(char *a, int b);
extern void func_0C0AD8(void);

void func_0C0088(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0C78F0(D_0027AF18);
    func_021710(*(int *)(obj + 0x24), -1);
    func_021758(*(int *)(obj + 0x24), -1);
    value = func_0BFE48();
    ok = func_021A48(value);
    D_001B3A2C = 0;
    {
        int *f = &D_001A2F34->field;
        *f = *f - D_001B3914;
    }
    D_001B3919[0] = 1;
    if (ok != 0) {
        func_021A78(*(int *)(obj + 0x24), value, -1);
        func_020AB0(D_001E4410, *(int *)(obj + 0x24));
        func_0C0AD8();
    }
}
