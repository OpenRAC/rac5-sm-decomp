/* 0x01ED8230 -- IOP module request: checks the RPC client state, fills the request block (command word and up to 0xFC argument bytes) and calls the module server, returning its result code and reply length. Ported from OpenRAC/rac4-decomp src/core/0012C888.c (func_0012C888; itself adapted from rac3-decomp func_00123ED8). */
typedef signed int s32;
typedef unsigned char u8;

typedef struct {
    s32 f0;
    s32 f4;
    char f8[0xFC];
    char f104[0xFC];
} Type1;

typedef struct {
    char f0[0xFC];
} Type2;

extern Type1 D_01FE7300;
extern u8 D_01FE7500[];
extern s32 func_01ED7E98();
extern s32 func_01ED7F98();
extern s32 sceSifCallRpc();
extern void memcpy(void *, void *, s32);

s32 sceSifStopModule(s32 arg0, s32 arg1, s32 arg2, s32 *arg3)
{
    if (func_01ED7E98() < 0) {
        return 0xFFFF0000;
    }
    if (func_01ED7F98() != 0) {
        return 0xFFFEFFFC;
    }
    D_01FE7300.f0 = arg0;
    if (arg2 != 0) {
        if (arg1 > 0xFC) {
            *(Type2 *)D_01FE7300.f104 = *(Type2 *)arg2;
            D_01FE7300.f4 = 0xFC;
        } else {
            memcpy(D_01FE7300.f104, (void *)arg2, arg1);
            D_01FE7300.f4 = arg1;
        }
    } else {
        D_01FE7300.f4 = 0;
    }
    if (sceSifCallRpc(D_01FE7500, 7, 0, &D_01FE7300, 0x200, &D_01FE7300, 8, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    {
        s32 var1 = D_01FE7300.f0;
        *arg3 = D_01FE7300.f4;
        return var1;
    }
}
