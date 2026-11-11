/* FRONTEND:0x013F20 -- resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_0012D268;
extern char D_0012D248[0x20];
extern Table D_000301C0;
extern int D_00030184;
extern int D_00030188;
extern int D_00030190;
extern int D_000301A0;
extern int D_000301B0;
extern int D_000301B8;

extern void *memset(void *p, int v, unsigned int n);
extern void func_013EC0(int a);
extern void func_010018(float f, int a, int *r);
extern int func_00B5E0(int *r);
extern int func_00B610(int *r);
extern int func_00B640(int *r);
extern int func_00B658(int *r);
extern void func_00DC30(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_00FF68(int a, int b);

void func_013F20(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_013EC0(0);
    D_00030190 = 1;
    memset(D_0012D248, 0, 0x20);
    D_000301A0 = 0;
    D_000301B0 = 0;
    D_0012D268.w14 = 0;
    D_000301B8 = 0;
    func_010018(0.0f, D_000301C0.w4, r);
    D_00030184 = x - func_00B5E0(r);
    D_00030188 = y - func_00B610(r);
    r[0] += D_00030184;
    r[2] += D_00030184;
    r[1] += D_00030188;
    r[3] += D_00030188;
    func_00DC30(&D_0012D268, func_00B5E0(r), func_00B610(r), func_00B640(r), func_00B658(r), 0x40602020);
    D_0012D268.w14 = 0;
    do {
        i++;
        func_00FF68(D_000301C0.row[D_000301B8].p, 0);
    } while (i < 6);
}
