/* LEVEL_23:0x019B20 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_002025C0;
extern int D_001C2818;
extern int D_001C2824;
extern unsigned char D_001C280A;
extern unsigned char D_001C280B;
extern unsigned char D_001C280C;
extern unsigned char D_001C280D;
extern unsigned char D_001C2809;
extern unsigned char D_001C97D8;
extern int D_001C97DC;
extern char D_00207AF0[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_084D90(int);
extern void func_075138(int);
extern void func_001000(int);
extern void func_08D370(int, int, int, int);
extern void func_08EFB0(int);
extern int func_0170B8(void);
extern void func_0898C8(int);
extern void func_08A3F0(void);
extern void func_08FEF0(int);
extern void func_08FF48(int, int, int);
extern void func_098E50(int, int);
extern void func_016DA0(void);
extern char *func_0011C8(void);
extern void func_07A688(char *, int);
extern void func_079650(char *, int, float *, int);
extern void func_076410(void);
extern void func_085F88(int, int);
extern void func_07AAB8(void);
extern void func_0967F8(void);
extern void func_02F1C8(void);
extern void func_076168(void);
extern void func_016EF0(void);
extern void func_076480(void);
extern void func_02F1E8(void);
extern void func_02F160(void);
extern void func_086DF0(void);
extern void func_084E88(char *, int);
extern void func_099298(int);
extern void func_077530(Vec3 *, float);
extern void func_08A748(int, float);
extern void func_0758C8(int);
extern void func_0A6E40(void);

void func_019B20(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_001C2818 = frame;
    func_084D90(frame & 0xFF);
    if (D_001C280D) {
        func_075138(1);
        func_001000(frame);
        func_08D370(0, 0x1D, frame, 0);
        func_08EFB0(frame);
    }
    D_001C2824 = func_0170B8();
    D_001C97D8 = 0;
    func_0898C8(D_001C97DC);
    if (D_001C280C)
        func_08A3F0();
    FOG_Update(frame);
    func_08FEF0(D_001C2818);
    func_08FF48(0, 1, frame);
    func_098E50(1, 2);
    func_016DA0();
    func_08FF48(2, 3, frame);
    if (D_001C2809) {
        p = func_0011C8();
        func_07A688(p + 0x30, D_001C2824);
    }
    func_08FF48(4, 5, frame);
    player = &D_002025C0;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011C8();
        func_079650(p + 0x30, D_001C2824, v, 0);
    }
    func_08FF48(6, 7, frame);
    func_076410();
    func_001000(frame);
    if (D_001C280A)
        func_085F88(0, 1);
    func_07AAB8();
    func_0967F8();
    func_02F1C8();
    if (D_001C280C)
        func_076168();
    func_08FF48(8, 9, frame);
    if (D_001C280B)
        func_016EF0();
    func_076480();
    if (D_001C280A)
        func_085F88(2, 3);
    p = func_0011C8();
    func_079650(p + 0x30, D_001C2824, v, 1);
    func_02F1E8();
    func_02F160();
    if (D_001C280C)
        func_076168();
    if (D_001C280A)
        func_086DF0();
    func_084E88(D_00207AF0, frame & 0xFF);
    func_099298(0);
    if (D_001C280C) {
        if (player->p59C != 0) {
            p = func_0011C8();
            tmp = *(Vec3 *)(p + 0x30);
            func_077530(&tmp, 36.0f);
        }
    }
    func_08FF48(0xA, 0xB, frame);
    func_08A748(frame, 0.033333335f);
    func_08FF48(0xD, 0xE, frame);
    func_08FF48(0xF, 0x13, frame);
    func_08FF48(0x14, 0x17, frame);
    func_08FF48(0x18, 0x1B, frame);
    func_0758C8(4);
    func_08FF48(0x1C, 0x1D, frame);
    func_098E50(0, 2);
    func_0A6E40();
}
