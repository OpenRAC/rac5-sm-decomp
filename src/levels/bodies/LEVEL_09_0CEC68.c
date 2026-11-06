struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_00314298[];
extern char D_0021C8C0[];
extern int D_001EE4FC;
extern struct Hdr *D_001DDDAC;
extern int D_001EE3E4;
extern char D_001EE3E9[];

extern int func_0D64D0(char *a);
extern void func_023920(int a, long b);
extern void func_023968(int a, long b);
extern int func_0CEA28(void);
extern int func_023D30(int a);
extern void func_023D60(int a, int b, long c);
extern void func_022C48(char *a, int b);
extern void func_0CF6B8(void);

void func_0CEC68(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0D64D0(D_00314298);
    func_023920(*(int *)(obj + 0x24), -1);
    func_023968(*(int *)(obj + 0x24), -1);
    value = func_0CEA28();
    ok = func_023D30(value);
    D_001EE4FC = 0;
    {
        int *f = &D_001DDDAC->field;
        *f = *f - D_001EE3E4;
    }
    D_001EE3E9[0] = 1;
    if (ok != 0) {
        func_023D60(*(int *)(obj + 0x24), value, -1);
        func_022C48(D_0021C8C0, *(int *)(obj + 0x24));
        func_0CF6B8();
    }
}
