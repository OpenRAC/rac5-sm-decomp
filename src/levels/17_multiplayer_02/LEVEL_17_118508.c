/* LEVEL_17:0x118508 -- a header cleared and scaled, then a 64-byte
   block copied from one global into another. */
typedef struct {
    int data[16];
} Block64;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Hdr;

extern Hdr D_002D1190;
extern Block64 D_002D11A0;
extern Block64 D_001C0100;

void func_118508(int handle, int flag)
{
    if (flag == 0xFFFF && handle != 0) {
        D_002D1190.a = 0;
        D_002D1190.b = 0;
        D_002D1190.c = 0;
        D_002D1190.d = 1.0f;
        D_002D11A0 = D_001C0100;
    }
}
