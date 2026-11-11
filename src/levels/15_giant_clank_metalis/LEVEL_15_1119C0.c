/* LEVEL_15:0x1119C0 -- initialises three sub-objects, then walks a 0x118-byte record table. */

extern void func_113928(char *p);
extern void func_112648(char *p);
extern void func_113210(char *p);
extern void func_11D580(char *rec, char *arg);
extern void func_13E970(char *p);
extern char D_002F0A84[];
extern char D_001702F0[];
extern char D_0015CF90[];

void func_1119C0(int unused, char *s)
{
    char *g;
    char *p;
    char *end;
    char *base;
    int count;

    func_113928(s + 0x7C);
    func_112648(s + 0x18);
    func_113210(s + 0x50);

    g = D_002F0A84;
    count = *(int *)(g + 0xCC);
    p = (char *)*(int *)(g + 0xC8);
    end = p + count * 0x118;
    base = D_001702F0;
    while (p != end) {
        func_11D580(p, base);
        p += 0x118;
    }
    func_13E970(D_0015CF90);
}
