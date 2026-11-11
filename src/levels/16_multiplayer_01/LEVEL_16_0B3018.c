/* LEVEL_16:0x0B3018 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
typedef struct {
    short x;
    short p0;
    short p1;
    short p2;
    unsigned short u4;
    unsigned short p3;
    unsigned short u6;
    unsigned short p4;
} R;
typedef struct {
    char p0[0xD0];
    int idx;
    int flag;
} Entry;
typedef struct {
    char p0[0x14];
    int v;
} Slot;

extern Entry D_002770F0;
extern Slot D_00277198;
extern Entry *D_001AE408;
extern void func_09D198(int a, unsigned int b, float c);
extern void func_09CDF8(int a, R *r, float c);
extern int func_096D10(R *r);
extern void func_098E80(short a, short b, int c);
extern int func_10F330(int a);
extern void func_0997E8(short a, short b, int c, float d, float e);
extern void func_098248(short a, short b, int c, float d, float e);
extern void func_097370(int a);
extern void func_0A94B0(void *p);
extern int func_0A9458(void *p);
extern void func_099BB8(void *p);
extern void func_099BF0(void *p);
extern void func_110EC8(int a, R *r, unsigned int c);

void func_0B3018(void)
{
    R r;
    Entry *e;

    func_09D198(0x36, -1, 0.0f);
    func_09CDF8(0x205, &r, 0.0f);
    func_098E80(func_096D10(&r), r.u6, func_10F330(0x2C9));
    func_09CDF8(0x207, &r, 0.0f);
    func_0997E8(r.u4, r.u6, func_10F330(0x1CA), 0.9f, 0.9f);
    func_09CDF8(0x201, &r, 0.0f);
    func_098248(r.x, r.u6, func_10F330(0x2CA), 0.9f, 0.9f);
    func_097370(0);
    func_0A94B0(&D_002770F0);
    func_097370(1);
    e = (Entry *)func_0A9458(&D_002770F0);
    if (e) {
        D_00277198.v = func_10F330(e->idx);
        if (D_001AE408 != e) {
            func_099BB8(&D_00277198);
            D_001AE408 = e;
        }
        func_099BF0(&D_00277198);
        if (e->flag) {
            func_09CDF8(0x206, &r, 0.0f);
            func_110EC8(0, &r, -1);
        }
    }
}
