/* LEVEL_01:0x0D19B8 -- placement copy of LEVEL_02_0D8348.c. */
struct Hdr {
    char pad[0x1C68];
    int field;
};

extern char D_0032CB18[];
extern char D_00235140[];
extern int D_002046FC;
extern struct Hdr *D_001F3FAC;
extern int D_002045E4;
extern char D_002045E9[];

extern int func_0D9220(char *a);
extern int func_024628(int a, long b);
extern void func_024670(int a, long b);
extern int func_0D1778(void);
extern int func_024A38(int a);
extern void func_024A68(int a, int b, long c);
extern void func_023AB8(char *a, int b);
extern void func_0D2408(void);

void func_0D19B8(void)
{
    int obj;
    int value;
    int ok;

    obj = func_0D9220(D_0032CB18);
    func_024628(*(int *)(obj + 0x24), -1);
    func_024670(*(int *)(obj + 0x24), -1);
    value = func_0D1778();
    ok = func_024A38(value);
    D_002046FC = 0;
    {
        int *f = &D_001F3FAC->field;
        *f = *f - D_002045E4;
    }
    D_002045E9[0] = 1;
    if (ok != 0) {
        func_024A68(*(int *)(obj + 0x24), value, -1);
        func_023AB8(D_00235140, *(int *)(obj + 0x24));
        func_0D2408();
    }
}
