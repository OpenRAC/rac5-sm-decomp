/* LEVEL_24:0x166AA8 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_001D8BA8[];
extern T1 D_00360B34[];
extern T2 D_00263C80;
extern T3 D_00360AA8;
extern int func_09F0D8(int n, int m);
extern int func_1B6BE8(int x);
extern void func_166940(void);

void func_166AA8(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_001D8BA8[i].b + 1) * 2 + 1) * (D_001D8BA8[i].a - 1) - 1;
        D_00360B34[i].n = n;
        D_00360B34[i].p = func_09F0D8(n * 48, 0);
    }
    D_00360AA8.w = func_1B6BE8((D_00263C80.v << 16) | 0xB8001059);
    func_166940();
}
