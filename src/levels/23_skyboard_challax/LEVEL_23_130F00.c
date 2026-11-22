/* LEVEL_23:0x130F00 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_00269200;
extern int D_001DA524;
extern int D_001DA528;
extern char D_001DA530[];
extern int D_001DA52C;
extern Slot D_00362D30[4];
extern char D_001EE8E0[];

extern int func_0F1738(int key);
extern void func_0F0D10(char *p);
extern int func_0E1550(int a, int b, int c, int d, int e, int f, int g);
extern void func_0E15C8(Slot *s, int h, char *t);
extern void func_0E2630(int mode);
extern int func_11AEE0(unsigned key);

void func_130F00(void)
{
    unsigned int i;
    Src *src;

    src = &D_00269200;
    D_001DA528 = func_0F1738((src->wF0 << 16) | 0xC0001044);
    func_0F0D10(D_001DA530);
    D_001DA524 = func_0E1550(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0E15C8(&D_00362D30[i], D_001DA524, D_001EE8E0);
    }
    func_0E2630(2);
    D_001DA52C = func_11AEE0(0xE7CB62C6);
}
