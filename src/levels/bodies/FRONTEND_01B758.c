/* FRONTEND:0x01B758 -- runs three query/update steps against a rectangle record. */
typedef struct R {
    short x;
    short pad2[3];
    unsigned short w;
    short padA;
    unsigned short h;
    short padE;
} R;
extern char D_00108E50[];
extern char D_00197600[];
extern void func_010018(int id, R *r, float f);
extern int func_00B5E0(R *r);
extern void func_00CFE0(short a, short b, char *p);
extern void func_012A18(char *p);
extern int func_01F778(int id);
extern void func_00C510(short a, short b, int c);
extern void func_00D6F0(short a, short b, int c);
extern void func_013C10(void);

void func_01B758(void)
{
    R r;
    float z = 0.0f;

    func_010018(0x218, &r, z);
    func_00CFE0(func_00B5E0(&r), r.h, D_00108E50);
    func_012A18(D_00197600);
    func_010018(0x2E9, &r, z);
    func_00C510(r.x, r.h, func_01F778(0x223));
    func_010018(0x2EB, &r, z);
    func_00D6F0(r.w, r.h, func_01F778(0x1CA));
    func_013C10();
}
