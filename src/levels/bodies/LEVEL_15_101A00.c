/* LEVEL_15:0x101A00 -- runs five setup helpers on a record, then walks a global array of 0x118-byte entries and finishes with three fixed calls. */

extern char D_002ED0A4[];
extern char D_0016FA88[];
extern char D_0015BE88[];
extern char D_0015BEA0[];
extern char D_0015C040[];
extern char D_0015C1E0[];

extern void func_1032F0(char *p);
extern void func_102BA0(char *p);
extern void func_0FD820(char *p);
extern void func_0FD9C8(char *p);
extern void func_0FDC38(char *p);
extern void func_11D580(char *p, char *q);
extern void func_13E970(char *p);

void func_101A00(int a0, char *s0)
{
    char *p;
    char *end;
    char *gb;
    char *b;

    func_1032F0(s0 + 0x3C);
    func_102BA0(s0 + 0x14);
    func_0FD820(s0 + 0x11C);
    func_0FD9C8(D_0015BE88);
    func_0FDC38(s0 + 0x108);
    gb = D_002ED0A4;
    p = *(char **)(gb + 0xC8);
    end = p + *(int *)(gb + 0xCC) * 0x118;
    b = D_0016FA88;
    while (p != end) {
        func_11D580(p, b);
        p += 0x118;
    }
    func_13E970(D_0015BEA0);
    func_13E970(D_0015C040);
    func_13E970(D_0015C1E0);
}
