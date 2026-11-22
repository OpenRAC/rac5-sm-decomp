/* LEVEL_01:0x13F7B8 -- sets up the shared handles: looks up the first handle from the source's packed id, resets the second, creates the third from the source's size and attaches it to the four slot records, then selects mode 2 and looks up the last handle. */

typedef struct {
    char pad_00[0xE8];
    int wE8;
    char pad_EC[4];
    int wF0;
} Src;

typedef struct {
    char pad_00[0x20];
} Slot;

extern Src D_00297DC0;
extern int D_00207124;
extern int D_00207128;
extern char D_00207130[];
extern int D_0020712C;
extern Slot D_003917F0[4];
extern char D_0021B8E0[];

extern int func_0FE850(int key);
extern void func_0FDE28(char *p);
extern int func_0EE668(int a, int b, int c, int d, int e, int f, int g);
extern void func_0EE6E0(Slot *s, int h, char *t);
extern void func_0EF748(int mode);
extern int func_12A068(unsigned key);

void func_13F7B8(void)
{
    unsigned int i;
    Src *src;

    src = &D_00297DC0;
    D_00207128 = func_0FE850((src->wF0 << 16) | 0xC0001044);
    func_0FDE28(D_00207130);
    D_00207124 = func_0EE668(0x10, src->wE8, 0, 0, 0, 0, 1);
    for (i = 0; i < 4; i++) {
        func_0EE6E0(&D_003917F0[i], D_00207124, D_0021B8E0);
    }
    func_0EF748(2);
    D_0020712C = func_12A068(0xE7CB62C6);
}
