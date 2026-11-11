/* LEVEL_22:0x0C52D0 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_00282CB8;
extern char D_00282C98[0x20];
extern Table D_00165A08;
extern int D_001659CC;
extern int D_001659D0;
extern int D_001659D8;
extern int D_001659E8;
extern int D_001659F8;
extern int D_00165A00;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0C5270(int a);
extern void func_09CD18(float f, int a, int *r);
extern int func_096C90(int *r);
extern int func_096CC0(int *r);
extern int func_096CF0(int *r);
extern int func_096DA8(int *r);
extern void func_0999F0(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_09CC68(int a, int b);

void func_0C52D0(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0C5270(0);
    D_001659D8 = 1;
    memset(D_00282C98, 0, 0x20);
    D_001659E8 = 0;
    D_001659F8 = 0;
    D_00282CB8.w14 = 0;
    D_00165A00 = 0;
    func_09CD18(0.0f, D_00165A08.w4, r);
    D_001659CC = x - func_096C90(r);
    D_001659D0 = y - func_096CC0(r);
    r[0] += D_001659CC;
    r[2] += D_001659CC;
    r[1] += D_001659D0;
    r[3] += D_001659D0;
    func_0999F0(&D_00282CB8, func_096C90(r), func_096CC0(r), func_096CF0(r), func_096DA8(r), 0x40602020);
    D_00282CB8.w14 = 0;
    do {
        i++;
        func_09CC68(D_00165A08.row[D_00165A00].p, 0);
    } while (i < 6);
}
