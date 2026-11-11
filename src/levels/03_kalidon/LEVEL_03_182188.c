/* LEVEL_03:0x182188 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_002204F8[];
extern T1 D_003B1A14[];
extern T2 D_002B2C40;
extern T3 D_003B1988;
extern int func_0A55E0(int n, int m);
extern int func_1FE5A0(int x);
extern void func_182020(void);

void func_182188(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_002204F8[i].b + 1) * 2 + 1) * (D_002204F8[i].a - 1) - 1;
        D_003B1A14[i].n = n;
        D_003B1A14[i].p = func_0A55E0(n * 48, 0);
    }
    D_003B1988.w = func_1FE5A0((D_002B2C40.v << 16) | 0xB8001059);
    func_182020();
}
