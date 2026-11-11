/* LEVEL_24:0x019978 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_001EB570;
extern int D_001C7534;
extern unsigned char D_001C008D;
extern unsigned char D_001C6EEC;

void func_019258(int a);
int func_000E58(int i);
void func_000E08(int i);
void func_001030(void);
void func_027BE8(float *a, float *b);
void *func_000FD0(void);
void func_091F28(void *ctx, float *a, float *b, int i);
void func_0992C8(void);
int func_027930(int a);
void func_019600(int i);
void func_0A2890(void);
void func_044CA8(void);
void func_0A28B0(void);
void func_0A9828(void);
void func_0A9860(void);
void func_09A9A8(int a, unsigned int b);

void func_019978(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_001EB570 == 1) {
        D_001C7534 = 0xCCAA00;
    } else {
        D_001C7534 = 0;
    }
    func_019258(1);
    for (i = 0; i < 2; i++) {
        if (D_001C008D != 0 && func_000E58(i) != 0) {
            func_000E08(i);
            func_001030();
            func_027BE8(a, b);
            func_091F28(func_000FD0(), a, b, i);
        }
    }
    func_0992C8();
    for (i = 0; i < 2; i++) {
        if (func_000E58(i) != 0) {
            func_000E08(i);
            func_001030();
            D_001C6EEC = func_027930(4);
            func_019600(i);
            func_0A2890();
            func_044CA8();
            func_0A28B0();
        }
    }
    func_0A2890();
    func_0A9828();
    func_0A9860();
    func_0A28B0();
    func_09A9A8(0, 0xFFFFFFFF);
}
