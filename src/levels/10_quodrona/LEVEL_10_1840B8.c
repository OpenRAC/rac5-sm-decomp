/* LEVEL_10:0x1840B8 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_00210A90[];
extern T1 D_0039FF6C[];
extern T2 D_002A11C0;
extern T3 D_0039FEE0;
extern int func_0A6978(int n, int m);
extern int func_1EEF68(int x);
extern void func_183F50(void);

void func_1840B8(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_00210A90[i].b + 1) * 2 + 1) * (D_00210A90[i].a - 1) - 1;
        D_0039FF6C[i].n = n;
        D_0039FF6C[i].p = func_0A6978(n * 48, 0);
    }
    D_0039FEE0.w = func_1EEF68((D_002A11C0.v << 16) | 0xB8001059);
    func_183F50();
}
