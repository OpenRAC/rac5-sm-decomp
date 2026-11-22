/* 0x01EA41E0 -- libpad: copies six actuator bytes into one pad slot's request buffer and sends them to the pad server. Ported from OpenRAC/rac4-decomp src/core/0013BF40.c (func_0013BF40; itself adapted from rac3-decomp func_0012F918). */
typedef unsigned char u8;
typedef signed int s32;
typedef struct { u8 pad0[4]; s32 x4; s32 x8; u8 act[6]; } Type1;
typedef struct { u8 pad0[4]; Type1 *x4; u8 pad8[0x1C - 8]; } Type2;

extern void func_01EA3E08(s32, s32, u8 *);
extern s32 func_01EA3A50(s32, s32);
extern Type2 D_01FD3650[][4];

s32 scePadSetActDirect(s32 arg0, s32 arg1, u8 *arg2) {
    u8 var1[0x80];
    Type1 *buf;
    s32 i;

    func_01EA3E08(arg0, arg1, var1);
    if (var1[0x72] != 1) {
        return 0;
    }
    buf = D_01FD3650[arg0][arg1].x4;
    for (i = 0; i < 6; i++) {
        buf->act[i] = arg2[i];
    }
    buf->x4 = 1;
    buf->x8 = 6;
    if (func_01EA3A50(arg0, arg1) != 1) {
        return 0;
    }
    return 1;
}
