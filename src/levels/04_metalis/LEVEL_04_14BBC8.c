/* LEVEL_04:0x14BBC8 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_002B25C0;
extern int D_00220544;
extern int D_00220548;
extern char D_00220550[];
extern int D_0022054C;
extern Slot D_003ABFF0[4];
extern char D_002352E0[];

extern int func_105D88(int key);
extern void func_105360(char *p);
extern int func_0F3E68(int a, int b, int c, int d, int e, int f, int g);
extern void func_0F3EE0(Slot *s, int h, char *t);
extern void func_0F6C80(int mode);
extern int func_1364E8(unsigned key);

void func_14BBC8(void)
{
    unsigned int i;
    Src *src;

    src = &D_002B25C0;
    D_00220548 = func_105D88((src->wF0 << 16) | 0xC0001044);
    func_105360(D_00220550);
    D_00220544 = func_0F3E68(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0F3EE0(&D_003ABFF0[i], D_00220544, D_002352E0);
    }
    func_0F6C80(2);
    D_0022054C = func_1364E8(0xE7CB62C6);
}
