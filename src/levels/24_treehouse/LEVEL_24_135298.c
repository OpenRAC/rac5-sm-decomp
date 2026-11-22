/* LEVEL_24:0x135298 -- placement copy of LEVEL_01_13F7B8.c: sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_00263C80;
extern int D_001D7DA4;
extern int D_001D7DA8;
extern char D_001D7DB0[];
extern int D_001D7DAC;
extern Slot D_0035D6B0[4];
extern char D_001EC570[];

extern int func_0F6460(int key);
extern void func_0F5A38(char *p);
extern int func_0E4540(int a, int b, int c, int d, int e, int f, int g);
extern void func_0E45B8(Slot *s, int h, char *t);
extern void func_0E7358(int mode);
extern int func_11FB68(unsigned key);

void func_135298(void)
{
    unsigned int i;
    Src *src;

    src = &D_00263C80;
    D_001D7DA8 = func_0F6460((src->wF0 << 16) | 0xC0001044);
    func_0F5A38(D_001D7DB0);
    D_001D7DA4 = func_0E4540(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0E45B8(&D_0035D6B0[i], D_001D7DA4, D_001EC570);
    }
    func_0E7358(2);
    D_001D7DAC = func_11FB68(0xE7CB62C6);
}
