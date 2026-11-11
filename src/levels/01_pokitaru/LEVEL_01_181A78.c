/* LEVEL_01:0x181A78 -- allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_00207BD8[];
extern T1 D_00396B4C[];
extern T2 D_00297DC0;
extern T3 D_00396AC0;
extern int func_0A5860(int n, int m);
extern int func_1E5F10(int x);
extern void func_181910(void);

void func_181A78(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_00207BD8[i].b + 1) * 2 + 1) * (D_00207BD8[i].a - 1) - 1;
        D_00396B4C[i].n = n;
        D_00396B4C[i].p = func_0A5860(n * 48, 0);
    }
    D_00396AC0.w = func_1E5F10((D_00297DC0.v << 16) | 0xB8001059);
    func_181910();
}
