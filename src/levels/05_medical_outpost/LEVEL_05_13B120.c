/* LEVEL_05:0x13B120 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_00283C80;
extern int D_001F61A4;
extern int D_001F61A8;
extern char D_001F61B0[];
extern int D_001F61AC;
extern Slot D_0037D6B0[4];
extern char D_0020A730[];

extern int func_0FA990(int key);
extern void func_0F9F68(char *p);
extern int func_0EA7A8(int a, int b, int c, int d, int e, int f, int g);
extern void func_0EA820(Slot *s, int h, char *t);
extern void func_0EB888(int mode);
extern int func_1259E0(unsigned key);

void func_13B120(void)
{
    unsigned int i;
    Src *src;

    src = &D_00283C80;
    D_001F61A8 = func_0FA990((src->wF0 << 16) | 0xC0001044);
    func_0F9F68(D_001F61B0);
    D_001F61A4 = func_0EA7A8(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0EA820(&D_0037D6B0[i], D_001F61A4, D_0020A730);
    }
    func_0EB888(2);
    D_001F61AC = func_1259E0(0xE7CB62C6);
}
