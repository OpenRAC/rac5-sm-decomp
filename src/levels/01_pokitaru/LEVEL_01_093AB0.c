/* LEVEL_01:0x093AB0 -- packs a level, flags and a 16-bit id into one command word, submits it, and returns a cleared 0x70-byte record obtained for the resulting handle (0 when there is none). */
extern void func_096948(void *, unsigned int, void *, int, int, int, void *);
extern int func_096C60(void *);
extern void *func_097738(int handle);
extern void *func_097658(int *out, int handle, int one);
extern void func_093128(void);
extern void func_091928(void);
extern void *memset(void *, int, unsigned int);

void *func_093AB0(int a, int b, unsigned int c, int kind)
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
    bits = ((unsigned int)b << 6) | 0x6000;
    word |= bits;
    word |= 0x21;
    func_096948(buf, word, func_093128, 0x70, 1, -1, func_091928);
    handle = func_096C60(buf);
    if (handle == -1) {
        return 0;
    }
    if (kind == 1) {
        rec = func_097738(handle);
        if (rec == 0) {
            return 0;
        }
    } else {
        rec = func_097658(&ok, handle, 1);
        if (ok == 0) {
            return 0;
        }
    }
    memset(rec, 0, 0x70);
    return rec;
}
