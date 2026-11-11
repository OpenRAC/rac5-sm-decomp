/* LEVEL_04:0x0DC640 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_003478F8;
extern char D_003478D8[0x20];
extern Table D_0021FB48;
extern int D_0021FB0C;
extern int D_0021FB10;
extern int D_0021FB18;
extern int D_0021FB28;
extern int D_0021FB38;
extern int D_0021FB40;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0DC5E0(int a);
extern void func_0B3958(float f, int a, int *r);
extern int func_0AD890(int *r);
extern int func_0AD8C0(int *r);
extern int func_0AD8F0(int *r);
extern int func_0AD9A8(int *r);
extern void func_0B0630(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0B38A8(int a, int b);

void func_0DC640(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0DC5E0(0);
    D_0021FB18 = 1;
    memset(D_003478D8, 0, 0x20);
    D_0021FB28 = 0;
    D_0021FB38 = 0;
    D_003478F8.w14 = 0;
    D_0021FB40 = 0;
    func_0B3958(0.0f, D_0021FB48.w4, r);
    D_0021FB0C = x - func_0AD890(r);
    D_0021FB10 = y - func_0AD8C0(r);
    r[0] += D_0021FB0C;
    r[2] += D_0021FB0C;
    r[1] += D_0021FB10;
    r[3] += D_0021FB10;
    func_0B0630(&D_003478F8, func_0AD890(r), func_0AD8C0(r), func_0AD8F0(r), func_0AD9A8(r), 0x40602020);
    D_003478F8.w14 = 0;
    do {
        i++;
        func_0B38A8(D_0021FB48.row[D_0021FB40].p, 0);
    } while (i < 6);
}
