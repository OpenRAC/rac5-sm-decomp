/* LEVEL_20:0x09D548 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_0019A930;
extern Slot D_0019A9D8;
extern Entry *D_00110AE8;
extern void func_087890(int a, unsigned int b, float c);
extern void func_0874F0(int a, R *r, float c);
extern int func_081408(R *r);
extern void func_083578(short a, short b, int c);
extern int func_0E2118(int a);
extern void func_083EE0(short a, short b, int c, float d, float e);
extern void func_082940(short a, short b, int c, float d, float e);
extern void func_081A68(int a);
extern void func_0939E0(void *p);
extern int func_093988(void *p);
extern void func_0842B0(void *p);
extern void func_0842E8(void *p);
extern void func_0E3CB0(int a, R *r, unsigned int c);

void func_09D548(void)
{
    R r;
    Entry *e;

    func_087890(0x36, -1, 0.0f);
    func_0874F0(0x205, &r, 0.0f);
    func_083578(func_081408(&r), r.u6, func_0E2118(0x2C9));
    func_0874F0(0x207, &r, 0.0f);
    func_083EE0(r.u4, r.u6, func_0E2118(0x1CA), 0.9f, 0.9f);
    func_0874F0(0x201, &r, 0.0f);
    func_082940(r.x, r.u6, func_0E2118(0x2CA), 0.9f, 0.9f);
    func_081A68(0);
    func_0939E0(&D_0019A930);
    func_081A68(1);
    e = (Entry *)func_093988(&D_0019A930);
    if (e) {
        D_0019A9D8.v = func_0E2118(e->idx);
        if (D_00110AE8 != e) {
            func_0842B0(&D_0019A9D8);
            D_00110AE8 = e;
        }
        func_0842E8(&D_0019A9D8);
        if (e->flag) {
            func_0874F0(0x206, &r, 0.0f);
            func_0E3CB0(0, &r, -1);
        }
    }
}
