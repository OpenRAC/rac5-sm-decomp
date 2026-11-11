/* LEVEL_19:0x0C5D60 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_0027B2F8;
extern char D_0027B2D8[0x20];
extern Table D_001B56B8;
extern int D_001B567C;
extern int D_001B5680;
extern int D_001B5688;
extern int D_001B5698;
extern int D_001B56A8;
extern int D_001B56B0;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0C5D00(int a);
extern void func_09C688(float f, int a, int *r);
extern int func_0965A0(int *r);
extern int func_0965D0(int *r);
extern int func_096600(int *r);
extern int func_0966B8(int *r);
extern void func_099360(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_09C5D8(int a, int b);

void func_0C5D60(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0C5D00(0);
    D_001B5688 = 1;
    memset(D_0027B2D8, 0, 0x20);
    D_001B5698 = 0;
    D_001B56A8 = 0;
    D_0027B2F8.w14 = 0;
    D_001B56B0 = 0;
    func_09C688(0.0f, D_001B56B8.w4, r);
    D_001B567C = x - func_0965A0(r);
    D_001B5680 = y - func_0965D0(r);
    r[0] += D_001B567C;
    r[2] += D_001B567C;
    r[1] += D_001B5680;
    r[3] += D_001B5680;
    func_099360(&D_0027B2F8, func_0965A0(r), func_0965D0(r), func_096600(r), func_0966B8(r), 0x40602020);
    D_0027B2F8.w14 = 0;
    do {
        i++;
        func_09C5D8(D_001B56B8.row[D_001B56B0].p, 0);
    } while (i < 6);
}
