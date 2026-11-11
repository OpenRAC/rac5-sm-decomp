/* LEVEL_18:0x160988 -- packs nine record fields into one word, then calls two helpers with a local buffer. */

struct R160988 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
};

extern int func_106CB8(int a0, int a1);
extern void func_086E78(char *a0, unsigned int a1, int a2, int a3, int a4, int a5, int a6);
extern void func_087050(char *a0);

void func_160988(struct R160988 *a0)
{
    int buf[4];
    int r;
    unsigned int w;

    r = func_106CB8(a0->f4, 9);
    w = (unsigned int)a0->f0 << 27;
    w |= (unsigned int)r << 16;
    w |= (unsigned int)a0->f8 << 15;
    w |= (unsigned int)a0->fC << 14;
    w |= (unsigned int)a0->f10 << 13;
    w |= (unsigned int)a0->f14 << 12;
    w |= (unsigned int)a0->f18 << 10;
    w |= (unsigned int)a0->f1C << 6;
    func_086E78((char *)buf, w | 0x21, a0->f20, 20, 0, -1, 0);
    func_087050((char *)buf);
}
