/* LEVEL_04:0x18D018 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_002212E8[];
extern T1 D_003B138C[];
extern T2 D_002B25C0;
extern T3 D_003B1300;
extern int func_0AAA70(int n, int m);
extern int func_1FF0D0(int x);
extern void func_18CEB0(void);

void func_18D018(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_002212E8[i].b + 1) * 2 + 1) * (D_002212E8[i].a - 1) - 1;
        D_003B138C[i].n = n;
        D_003B138C[i].p = func_0AAA70(n * 48, 0);
    }
    D_003B1300.w = func_1FF0D0((D_002B25C0.v << 16) | 0xB8001059);
    func_18CEB0();
}
