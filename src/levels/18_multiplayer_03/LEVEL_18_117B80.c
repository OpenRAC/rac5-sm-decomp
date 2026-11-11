/* LEVEL_18:0x117B80 -- placement copy of LEVEL_17_118508.c: a header cleared and scaled, then a 64-byte
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

extern Hdr D_002E0210;
extern Block64 D_002E0220;
extern Block64 D_001CE200;

void func_117B80(int handle, int flag)
{
    if (flag == 0xFFFF && handle != 0) {
        D_002E0210.a = 0;
        D_002E0210.b = 0;
        D_002E0210.c = 0;
        D_002E0210.d = 1.0f;
        D_002E0220 = D_001CE200;
    }
}
