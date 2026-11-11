/* LEVEL_06:0x174CA0 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_001F6A38[];
extern T1 D_00383884[];
extern T2 D_00284B40;
extern T3 D_003837F8;
extern int func_0A0030(int n, int m);
extern int func_1D4E58(int x);
extern void func_174B38(void);

void func_174CA0(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_001F6A38[i].b + 1) * 2 + 1) * (D_001F6A38[i].a - 1) - 1;
        D_00383884[i].n = n;
        D_00383884[i].p = func_0A0030(n * 48, 0);
    }
    D_003837F8.w = func_1D4E58((D_00284B40.v << 16) | 0xB8001059);
    func_174B38();
}
