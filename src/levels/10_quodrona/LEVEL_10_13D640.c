/* LEVEL_10:0x13D640 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_002A11C0;
extern int D_0020FD84;
extern int D_0020FD88;
extern char D_0020FD90[];
extern int D_0020FD8C;
extern Slot D_0039ABF0[4];
extern char D_002248B0[];

extern int func_0FE190(int key);
extern void func_0FD768(char *p);
extern int func_0EDFA8(int a, int b, int c, int d, int e, int f, int g);
extern void func_0EE020(Slot *s, int h, char *t);
extern void func_0EF088(int mode);
extern int func_127EC8(unsigned key);

void func_13D640(void)
{
    unsigned int i;
    Src *src;

    src = &D_002A11C0;
    D_0020FD88 = func_0FE190((src->wF0 << 16) | 0xC0001044);
    func_0FD768(D_0020FD90);
    D_0020FD84 = func_0EDFA8(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0EE020(&D_0039ABF0[i], D_0020FD84, D_002248B0);
    }
    func_0EF088(2);
    D_0020FD8C = func_127EC8(0xE7CB62C6);
}
