/* LEVEL_07:0x1427F0 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_002AD6C0;
extern int D_0021B424;
extern int D_0021B428;
extern char D_0021B430[];
extern int D_0021B42C;
extern Slot D_003A70F0[4];
extern char D_00230650[];

extern int func_0FF650(int key);
extern void func_0FEC28(char *p);
extern int func_0EF468(int a, int b, int c, int d, int e, int f, int g);
extern void func_0EF4E0(Slot *s, int h, char *t);
extern void func_0F0548(int mode);
extern int func_12D068(unsigned key);

void func_1427F0(void)
{
    unsigned int i;
    Src *src;

    src = &D_002AD6C0;
    D_0021B428 = func_0FF650((src->wF0 << 16) | 0xC0001044);
    func_0FEC28(D_0021B430);
    D_0021B424 = func_0EF468(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0EF4E0(&D_003A70F0[i], D_0021B424, D_00230650);
    }
    func_0F0548(2);
    D_0021B42C = func_12D068(0xE7CB62C6);
}
