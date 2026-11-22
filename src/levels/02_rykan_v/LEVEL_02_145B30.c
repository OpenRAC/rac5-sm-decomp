/* LEVEL_02:0x145B30 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_002AF2C0;
extern int D_0021C0E4;
extern int D_0021C0E8;
extern char D_0021C0F0[];
extern int D_0021C0EC;
extern Slot D_003A8CF0[4];
extern char D_00230930[];

extern int func_104A00(int key);
extern void func_103FD8(char *p);
extern int func_0F4818(int a, int b, int c, int d, int e, int f, int g);
extern void func_0F4890(Slot *s, int h, char *t);
extern void func_0F58F8(int mode);
extern int func_130418(unsigned key);

void func_145B30(void)
{
    unsigned int i;
    Src *src;

    src = &D_002AF2C0;
    D_0021C0E8 = func_104A00((src->wF0 << 16) | 0xC0001044);
    func_103FD8(D_0021C0F0);
    D_0021C0E4 = func_0F4818(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0F4890(&D_003A8CF0[i], D_0021C0E4, D_00230930);
    }
    func_0F58F8(2);
    D_0021C0EC = func_130418(0xE7CB62C6);
}
