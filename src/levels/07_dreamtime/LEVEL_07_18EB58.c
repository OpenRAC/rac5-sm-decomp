/* LEVEL_07:0x18EB58 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_0021C448[];
extern T1 D_003AC494[];
extern T2 D_002AD6C0;
extern T3 D_003AC408;
extern int func_0A7860(int n, int m);
extern int func_1FA1E0(int x);
extern void func_18E9F0(void);

void func_18EB58(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_0021C448[i].b + 1) * 2 + 1) * (D_0021C448[i].a - 1) - 1;
        D_003AC494[i].n = n;
        D_003AC494[i].p = func_0A7860(n * 48, 0);
    }
    D_003AC408.w = func_1FA1E0((D_002AD6C0.v << 16) | 0xB8001059);
    func_18E9F0();
}
