/* LEVEL_03:0x13DBC8 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_002B2C40;
extern int D_0021F7A4;
extern int D_0021F7A8;
extern char D_0021F7B0[];
extern int D_0021F7AC;
extern Slot D_003AC670[4];
extern char D_00234850[];

extern int func_0FD0E8(int key);
extern void func_0FC6C0(char *p);
extern int func_0ECF00(int a, int b, int c, int d, int e, int f, int g);
extern void func_0ECF78(Slot *s, int h, char *t);
extern void func_0EDFE0(int mode);
extern int func_1282D0(unsigned key);

void func_13DBC8(void)
{
    unsigned int i;
    Src *src;

    src = &D_002B2C40;
    D_0021F7A8 = func_0FD0E8((src->wF0 << 16) | 0xC0001044);
    func_0FC6C0(D_0021F7B0);
    D_0021F7A4 = func_0ECF00(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0ECF78(&D_003AC670[i], D_0021F7A4, D_00234850);
    }
    func_0EDFE0(2);
    D_0021F7AC = func_1282D0(0xE7CB62C6);
}
