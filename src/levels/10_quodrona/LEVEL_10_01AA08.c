/* LEVEL_10:0x01AA08 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_00223780;
extern int D_001FF8B4;
extern unsigned char D_001F840D;
extern unsigned char D_001FF26C;

void func_01A2E8(int a);
int func_000DE0(int i);
void func_000D90(int i);
void func_000FB8(void);
void func_02A480(float *a, float *b);
void *func_000F58(void);
void func_099498(void *ctx, float *a, float *b, int i);
void func_0A0B28(void);
int func_02A1C8(int a);
void func_01A690(int i);
void func_0AA130(void);
void func_04A3C8(void);
void func_0AA150(void);
void func_0B10C8(void);
void func_0B1100(void);
void func_0A2248(int a, unsigned int b);

void func_01AA08(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_00223780 == 1) {
        D_001FF8B4 = 0xCCAA00;
    } else {
        D_001FF8B4 = 0;
    }
    func_01A2E8(1);
    for (i = 0; i < 2; i++) {
        if (D_001F840D != 0 && func_000DE0(i) != 0) {
            func_000D90(i);
            func_000FB8();
            func_02A480(a, b);
            func_099498(func_000F58(), a, b, i);
        }
    }
    func_0A0B28();
    for (i = 0; i < 2; i++) {
        if (func_000DE0(i) != 0) {
            func_000D90(i);
            func_000FB8();
            D_001FF26C = func_02A1C8(4);
            func_01A690(i);
            func_0AA130();
            func_04A3C8();
            func_0AA150();
        }
    }
    func_0AA130();
    func_0B10C8();
    func_0B1100();
    func_0AA150();
    func_0A2248(0, 0xFFFFFFFF);
}
