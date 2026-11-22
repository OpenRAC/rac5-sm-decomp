/* LEVEL_06:0x135EB0 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_00284B40;
extern int D_001F5D24;
extern int D_001F5D28;
extern char D_001F5D30[];
extern int D_001F5D2C;
extern Slot D_0037E570[4];
extern char D_0020A6D0[];

extern int func_0F7910(int key);
extern void func_0F6EE8(char *p);
extern int func_0E7728(int a, int b, int c, int d, int e, int f, int g);
extern void func_0E77A0(Slot *s, int h, char *t);
extern void func_0E8808(int mode);
extern int func_1206C0(unsigned key);

void func_135EB0(void)
{
    unsigned int i;
    Src *src;

    src = &D_00284B40;
    D_001F5D28 = func_0F7910((src->wF0 << 16) | 0xC0001044);
    func_0F6EE8(D_001F5D30);
    D_001F5D24 = func_0E7728(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0E77A0(&D_0037E570[i], D_001F5D24, D_0020A6D0);
    }
    func_0E8808(2);
    D_001F5D2C = func_1206C0(0xE7CB62C6);
}
