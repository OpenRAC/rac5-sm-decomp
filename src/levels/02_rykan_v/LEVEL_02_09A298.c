/* LEVEL_02:0x09A298 -- placement copy of LEVEL_01_093BC8.c: builds a packed request word, looks up a slot and returns a cleared entry for it. */
extern void func_09D018(void *, unsigned int, void *, int, int, int, void *);
extern int func_09D330(void *);
extern void *func_09DE08(int handle);
extern void *func_09DD28(int *out, int handle, int one);
extern void *memset(void *p, int c, unsigned int n);
extern void func_098CF8(void);
extern void func_097FF8(void);

void *func_09A298(int a, int b, unsigned int c, int kind)
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
    func_09D018(buf, word, func_098CF8, 0x70, 1, -1, func_097FF8);
    handle = func_09D330(buf);
    if (handle == -1) {
        return 0;
    }
    if (kind == 1) {
        rec = func_09DE08(handle);
        if (rec == 0) {
            return 0;
        }
    } else {
        rec = func_09DD28(&ok, handle, 1);
        if (ok == 0) {
            return 0;
        }
    }
    memset(rec, 0, 0x70);
    return rec;
}
