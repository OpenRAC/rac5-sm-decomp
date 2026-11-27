/* LEVEL_01:0x0C56F0 -- applies a stick-driven pan and zoom, then notifies the UI state helpers. */
typedef struct {
    char pad0[0x30];
    float x;
    float y;
} Pad;
typedef struct {
    char pad0[4];
    unsigned int bits;
} Obj;
typedef struct {
    unsigned char pad[0x1800];
    int h;
    unsigned char rest[0x10000 - 0x1804];
} Chunk;

extern float D_00200B94;
extern int D_00200B18;
extern int D_00200B1C;
extern float D_00200B78;
extern float D_00200B7C;
extern float D_00200B80;
extern float D_00200B84;
extern char D_00200B28[];
extern char D_00200B50[];
extern Chunk D_002B3D30[];

extern unsigned int func_087F88(int a);
extern long long func_0A69B8(void);
extern Obj *func_087E78(int a);
extern Pad *func_087EB0(int a);
extern int func_02A3F0(int a);
extern void func_0C5428(int *a, int *b);
extern long long func_0A6958(void);
extern int func_0B6020(int a);
extern void func_01A828(int a, int b);
extern int func_0BCA80(int a);
extern void func_0B2A20(char *a);
extern int func_0B2AB8(char *a);
extern int func_0A34F8(int a, int b, int c);

void func_0C56F0(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_087F88(0x6B10);
    if (func_0A69B8() != 0) {
        o = func_087E78(0x6B10);
        p = func_087EB0(0x6B10);
        sy = (int)(p->x * D_00200B94);
        sx = (int)(p->y * D_00200B94);
        if (func_02A3F0(4) != 0)
            sy = -sy;
        D_00200B18 = D_00200B18 - sy;
        D_00200B1C = D_00200B1C - sx;
        func_0C5428(&D_00200B18, &D_00200B1C);
        if (o->bits & 0x8000) {
            D_00200B78 = D_00200B78 + D_00200B7C;
            if (D_00200B78 > D_00200B80)
                D_00200B78 = D_00200B80;
        } else if (o->bits & 0x2000) {
            D_00200B78 = D_00200B78 - D_00200B7C;
            if (D_00200B78 < D_00200B84)
                D_00200B78 = D_00200B84;
        }
    }
    if ((mode & 0x81009) != 0 || func_0A6958() == 0) {
        func_0B6020(7);
        func_01A828(4, 0);
    } else if (mode & 0x4000) {
        func_0B6020(6);
        func_0BCA80(15);
    }
    func_0B2A20(D_00200B28);
    q = D_00200B50;
    func_0B2A20(q);
    r = func_0B2AB8(q);
    func_0A34F8(D_002B3D30[6].h, 5, r);
}
