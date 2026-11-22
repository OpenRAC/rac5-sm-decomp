/* LEVEL_09:0x138798 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_0027F540;
extern int D_001F0C24;
extern int D_001F0C28;
extern char D_001F0C30[];
extern int D_001F0C2C;
extern Slot D_00378F70[4];
extern char D_00205470[];

extern int func_0FA730(int key);
extern void func_0F9D08(char *p);
extern int func_0EA548(int a, int b, int c, int d, int e, int f, int g);
extern void func_0EA5C0(Slot *s, int h, char *t);
extern void func_0EB628(int mode);
extern int func_123000(unsigned key);

void func_138798(void)
{
    unsigned int i;
    Src *src;

    src = &D_0027F540;
    D_001F0C28 = func_0FA730((src->wF0 << 16) | 0xC0001044);
    func_0F9D08(D_001F0C30);
    D_001F0C24 = func_0EA548(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0EA5C0(&D_00378F70[i], D_001F0C24, D_00205470);
    }
    func_0EB628(2);
    D_001F0C2C = func_123000(0xE7CB62C6);
}
