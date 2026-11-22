/* LEVEL_08:0x150C60 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_002E7040;
extern int D_0024FFE4;
extern int D_0024FFE8;
extern char D_0024FFF0[];
extern int D_0024FFEC;
extern Slot D_003E0A70[4];
extern char D_00265750[];

extern int func_10A298(int key);
extern void func_109870(char *p);
extern int func_0F8360(int a, int b, int c, int d, int e, int f, int g);
extern void func_0F83D8(Slot *s, int h, char *t);
extern void func_0FB190(int mode);
extern int func_13B5A0(unsigned key);

void func_150C60(void)
{
    unsigned int i;
    Src *src;

    src = &D_002E7040;
    D_0024FFE8 = func_10A298((src->wF0 << 16) | 0xC0001044);
    func_109870(D_0024FFF0);
    D_0024FFE4 = func_0F8360(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0F83D8(&D_003E0A70[i], D_0024FFE4, D_00265750);
    }
    func_0FB190(2);
    D_0024FFEC = func_13B5A0(0xE7CB62C6);
}
