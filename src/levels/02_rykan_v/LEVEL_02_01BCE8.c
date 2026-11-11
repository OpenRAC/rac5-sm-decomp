/* LEVEL_02:0x01BCE8 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_0022F770;
extern int D_0020B874;
extern unsigned char D_0020408D;
extern unsigned char D_0020B22C;

void func_01B5C8(int a);
int func_001050(int i);
void func_001000(int i);
void func_001228(void);
void func_02AE70(float *a, float *b);
void *func_0011C8(void);
void func_09F6A0(void *ctx, float *a, float *b, int i);
void func_0A6338(void);
int func_02ABB8(int a);
void func_01B970(int i);
void func_0AF928(void);
void func_050C48(void);
void func_0AF948(void);
void func_0B68C0(void);
void func_0B68F8(void);
void func_0A7A40(int a, unsigned int b);

void func_01BCE8(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_0022F770 == 1) {
        D_0020B874 = 0xCCAA00;
    } else {
        D_0020B874 = 0;
    }
    func_01B5C8(1);
    for (i = 0; i < 2; i++) {
        if (D_0020408D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            func_02AE70(a, b);
            func_09F6A0(func_0011C8(), a, b, i);
        }
    }
    func_0A6338();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            D_0020B22C = func_02ABB8(4);
            func_01B970(i);
            func_0AF928();
            func_050C48();
            func_0AF948();
        }
    }
    func_0AF928();
    func_0B68C0();
    func_0B68F8();
    func_0AF948();
    func_0A7A40(0, 0xFFFFFFFF);
}
