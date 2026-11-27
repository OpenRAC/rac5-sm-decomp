/* LEVEL_08:0x09BAE8 -- placement copy of LEVEL_01_093BC8.c: builds a packed request word, looks up a slot and returns a cleared entry for it. */
extern void func_09E868(void *, unsigned int, void *, int, int, int, void *);
extern int func_09EB80(void *);
extern void *func_09F7D8(int handle);
extern void *func_09F6B0(int *out, int handle, int one);
extern void *memset(void *p, int c, unsigned int n);
extern void func_09A548(void);
extern void func_099848(void);

void *func_09BAE8(int a, int b, unsigned int c, int kind)
{
    char buf[16];
    int level;
    int flag;
    int handle;
    int ok;
    void *rec;
    unsigned int word;
    unsigned int bits;

    flag = (b == 0);
    c &= 0xFFFF;
    if (a == 4) {
        a = 9;
    } else {
        level = 3;
        if (a < 3) {
            level = a;
        }
        if (level < 0) {
            level = 0;
        }
        a = 0x13 - level;
    }
    word = ((unsigned int)a << 27) | (c << 16);
    word |= (unsigned int)flag << 15;
    bits = ((unsigned int)b << 6) | 0x7000;
    word |= bits;
    word |= 0x19;
    func_09E868(buf, word, func_09A548, 0x70, 1, -1, func_099848);
    handle = func_09EB80(buf);
    if (handle == -1) {
        return 0;
    }
    if (kind == 1) {
        rec = func_09F7D8(handle);
        if (rec == 0) {
            return 0;
        }
    } else {
        rec = func_09F6B0(&ok, handle, 1);
        if (ok == 0) {
            return 0;
        }
    }
    memset(rec, 0, 0x70);
    return rec;
}
