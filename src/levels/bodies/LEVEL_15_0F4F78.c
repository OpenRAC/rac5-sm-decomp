/* LEVEL_15:0x0F4F78 -- creates and registers the handles of this module. */
typedef struct Glob {
    char pad[0xD0];
    int d0;
    char pad2[0x1B4];
    int f288;
    int f28C;
    int f290;
    int f294;
} Glob;
typedef struct Handles {
    char pad[0x20];
    int a;
    int b;
    int c;
    int d;
    int e;
    char pad2[0x44038];
    int z;
} Handles;
extern Glob D_001AFE00;
extern Handles D_002A8B58;
extern void func_125E18(void);
extern void func_127328(void);
extern void func_115C38(void);
extern void func_15BA30(void);
extern int func_122CF0(int a, int b, int c, int d, int e, int f);
extern int func_123DA8(int a, int b, int c, int d, int e, int f);
extern int func_124840(int a, int b, int c, int d, int e, int f);
extern int func_13CBB0(unsigned int a);
extern int func_0CDAD8(unsigned int a);
extern void func_13CC10(void (*f)(void));

void func_0F4F78(void)
{
    func_125E18();
    func_127328();
    D_002A8B58.a = func_122CF0(15, D_001AFE00.f288, 1, 0, 0, 4);
    D_002A8B58.b = func_123DA8(16, D_001AFE00.f294, 0, 0, 0, 1);
    D_002A8B58.c = func_124840(16, D_001AFE00.f290, 0, 0, 0, 1);
    D_002A8B58.d = func_13CBB0((D_001AFE00.f28C << 16) | 0x800030C1);
    D_002A8B58.e = func_0CDAD8((D_001AFE00.d0 << 16) | 0xA8007044);
    func_115C38();
    func_13CC10(func_15BA30);
    D_002A8B58.z = 0;
}
