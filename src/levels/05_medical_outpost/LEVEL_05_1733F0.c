/* LEVEL_05:0x1733F0 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_001F6B40[];
extern T1 D_0038283C[];
extern T2 D_00283C80;
extern T3 D_003827B0;
extern int func_0A3E20(int n, int m);
extern int func_1D5308(int x);
extern void func_173288(void);

void func_1733F0(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_001F6B40[i].b + 1) * 2 + 1) * (D_001F6B40[i].a - 1) - 1;
        D_0038283C[i].n = n;
        D_0038283C[i].p = func_0A3E20(n * 48, 0);
    }
    D_003827B0.w = func_1D5308((D_00283C80.v << 16) | 0xB8001059);
    func_173288();
}
