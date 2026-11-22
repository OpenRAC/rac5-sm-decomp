/* LEVEL_20:0x072540 -- placement copy of LEVEL_01_093AB0.c: packs a level, flags and a 16-bit id into one command word, submits it, and returns a cleared 0x70-byte record obtained for the resulting handle (0 when there is none). */
extern void func_074D68(void *, unsigned int, void *, int, int, int, void *);
extern int func_075008(void *);
extern void *func_075A48(int handle);
extern void *func_075968(int *out, int handle, int one);
extern void func_071BB8(void);
extern void func_0703B8(void);
extern void *memset(void *, int, unsigned int);

void *func_072540(int a, int b, unsigned int c, int kind)
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
    func_074D68(buf, word, func_071BB8, 0x70, 1, -1, func_0703B8);
    handle = func_075008(buf);
    if (handle == -1) {
        return 0;
    }
    if (kind == 1) {
        rec = func_075A48(handle);
        if (rec == 0) {
            return 0;
        }
    } else {
        rec = func_075968(&ok, handle, 1);
        if (ok == 0) {
            return 0;
        }
    }
    memset(rec, 0, 0x70);
    return rec;
}
