/* LEVEL_02:0x197A08 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_0021CBF0[];
extern T1 D_003AEB5C[];
extern T2 D_002AF2C0;
extern T3 D_003AEAD0;
extern int func_0AC170(int n, int m);
extern int func_1FABA8(int x);
extern void func_1978A0(void);

void func_197A08(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_0021CBF0[i].b + 1) * 2 + 1) * (D_0021CBF0[i].a - 1) - 1;
        D_003AEB5C[i].n = n;
        D_003AEB5C[i].p = func_0AC170(n * 48, 0);
    }
    D_003AEAD0.w = func_1FABA8((D_002AF2C0.v << 16) | 0xB8001059);
    func_1978A0();
}
