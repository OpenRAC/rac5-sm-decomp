/* LEVEL_21:0x0171F8 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_0017D2C0;
extern int D_00144080;
extern int D_0014408C;
extern unsigned char D_00144072;
extern unsigned char D_00144073;
extern unsigned char D_00144074;
extern unsigned char D_00144075;
extern unsigned char D_00144071;
extern unsigned char D_0014B058;
extern int D_0014B05C;
extern char D_001826E0[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_073340(int);
extern void func_0629E0(int);
extern void func_000B58(int);
extern void func_07B980(int, int, int, int);
extern void func_07D560(int);
extern int func_014B48(void);
extern void func_077D68(int);
extern void func_078890(void);
extern void func_07E4A0(int);
extern void func_07E4F8(int, int, int);
extern void func_082A08(int, int);
extern void func_014828(void);
extern char *func_000CB0(void);
extern void func_068F00(char *, int);
extern void func_067EC8(char *, int, float *, int);
extern void func_063CB8(void);
extern void func_074428(int, int);
extern void func_069330(void);
extern void func_080420(void);
extern void func_02B3D0(void);
extern void func_063A10(void);
extern void func_014978(void);
extern void func_063D28(void);
extern void func_02B3F0(void);
extern void func_02B368(void);
extern void func_075290(void);
extern void func_073438(char *, int);
extern void func_082E50(int);
extern void func_064C10(Vec3 *, float);
extern void func_078BE8(int, float);
extern void func_063170(int);
extern void func_090998(void);

void func_0171F8(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_00144080 = frame;
    func_073340(frame & 0xFF);
    if (D_00144075) {
        func_0629E0(1);
        func_000B58(frame);
        func_07B980(0, 0x1D, frame, 0);
        func_07D560(frame);
    }
    D_0014408C = func_014B48();
    D_0014B058 = 0;
    func_077D68(D_0014B05C);
    if (D_00144074)
        func_078890();
    FOG_Update(frame);
    func_07E4A0(D_00144080);
    func_07E4F8(0, 1, frame);
    func_082A08(1, 2);
    func_014828();
    func_07E4F8(2, 3, frame);
    if (D_00144071) {
        p = func_000CB0();
        func_068F00(p + 0x30, D_0014408C);
    }
    func_07E4F8(4, 5, frame);
    player = &D_0017D2C0;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_000CB0();
        func_067EC8(p + 0x30, D_0014408C, v, 0);
    }
    func_07E4F8(6, 7, frame);
    func_063CB8();
    func_000B58(frame);
    if (D_00144072)
        func_074428(0, 1);
    func_069330();
    func_080420();
    func_02B3D0();
    if (D_00144074)
        func_063A10();
    func_07E4F8(8, 9, frame);
    if (D_00144073)
        func_014978();
    func_063D28();
    if (D_00144072)
        func_074428(2, 3);
    p = func_000CB0();
    func_067EC8(p + 0x30, D_0014408C, v, 1);
    func_02B3F0();
    func_02B368();
    if (D_00144074)
        func_063A10();
    if (D_00144072)
        func_075290();
    func_073438(D_001826E0, frame & 0xFF);
    func_082E50(0);
    if (D_00144074) {
        if (player->p59C != 0) {
            p = func_000CB0();
            tmp = *(Vec3 *)(p + 0x30);
            func_064C10(&tmp, 36.0f);
        }
    }
    func_07E4F8(0xA, 0xB, frame);
    func_078BE8(frame, 0.033333335f);
    func_07E4F8(0xD, 0xE, frame);
    func_07E4F8(0xF, 0x13, frame);
    func_07E4F8(0x14, 0x17, frame);
    func_07E4F8(0x18, 0x1B, frame);
    func_063170(4);
    func_07E4F8(0x1C, 0x1D, frame);
    func_082A08(0, 2);
    func_090998();
}
