/* LEVEL_06:0x0BE460 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_00315F30;
extern Slot D_00315FD8;
extern Entry *D_001EF290;
extern void func_0A9278(int a, unsigned int b, float c);
extern void func_0A8ED8(int a, R *r, float c);
extern int func_0A2E50(R *r);
extern void func_0A4F60(short a, short b, int c);
extern int func_128B80(int a);
extern void func_0A58C8(short a, short b, int c, float d, float e);
extern void func_0A4328(short a, short b, int c, float d, float e);
extern void func_0A3480(int a);
extern void func_0B4D60(void *p);
extern int func_0B4D08(void *p);
extern void func_0A5C98(void *p);
extern void func_0A5CD0(void *p);
extern void func_12A828(int a, R *r, unsigned int c);

void func_0BE460(void)
{
    R r;
    Entry *e;

    func_0A9278(0x36, -1, 0.0f);
    func_0A8ED8(0x205, &r, 0.0f);
    func_0A4F60(func_0A2E50(&r), r.u6, func_128B80(0x2C9));
    func_0A8ED8(0x207, &r, 0.0f);
    func_0A58C8(r.u4, r.u6, func_128B80(0x1CA), 0.9f, 0.9f);
    func_0A8ED8(0x201, &r, 0.0f);
    func_0A4328(r.x, r.u6, func_128B80(0x2CA), 0.9f, 0.9f);
    func_0A3480(0);
    func_0B4D60(&D_00315F30);
    func_0A3480(1);
    e = (Entry *)func_0B4D08(&D_00315F30);
    if (e) {
        D_00315FD8.v = func_128B80(e->idx);
        if (D_001EF290 != e) {
            func_0A5C98(&D_00315FD8);
            D_001EF290 = e;
        }
        func_0A5CD0(&D_00315FD8);
        if (e->flag) {
            func_0A8ED8(0x206, &r, 0.0f);
            func_12A828(0, &r, -1);
        }
    }
}
