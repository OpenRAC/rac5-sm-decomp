/* LEVEL_07:0x0D8DF0 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
typedef struct {
    char pad0[0x14];
    int w14;
} Frame;

typedef struct {
    int p;
    char pad4[0x14];
} Row;

typedef struct {
    int w0;
    int w4;
    Row row[1];
} Table;

extern Frame D_003429F8;
extern char D_003429D8[0x20];
extern Table D_0021A988;
extern int D_0021A94C;
extern int D_0021A950;
extern int D_0021A958;
extern int D_0021A968;
extern int D_0021A978;
extern int D_0021A980;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0D8D90(int a);
extern void func_0B0708(float f, int a, int *r);
extern int func_0AA680(int *r);
extern int func_0AA6B0(int *r);
extern int func_0AA6E0(int *r);
extern int func_0AA798(int *r);
extern void func_0AD3E0(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0B0658(int a, int b);

void func_0D8DF0(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0D8D90(0);
    D_0021A958 = 1;
    memset(D_003429D8, 0, 0x20);
    D_0021A968 = 0;
    D_0021A978 = 0;
    D_003429F8.w14 = 0;
    D_0021A980 = 0;
    func_0B0708(0.0f, D_0021A988.w4, r);
    D_0021A94C = x - func_0AA680(r);
    D_0021A950 = y - func_0AA6B0(r);
    r[0] += D_0021A94C;
    r[2] += D_0021A94C;
    r[1] += D_0021A950;
    r[3] += D_0021A950;
    func_0AD3E0(&D_003429F8, func_0AA680(r), func_0AA6B0(r), func_0AA6E0(r), func_0AA798(r), 0x40602020);
    D_003429F8.w14 = 0;
    do {
        i++;
        func_0B0658(D_0021A988.row[D_0021A980].p, 0);
    } while (i < 6);
}
