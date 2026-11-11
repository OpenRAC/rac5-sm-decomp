/* LEVEL_19:0x119500 -- a header cleared and scaled, then a 64-byte
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

extern Hdr D_002E0010;
extern Block64 D_002E0020;
extern Block64 D_001CDE80;

void func_119500(int handle, int flag)
{
    if (flag == 0xFFFF && handle != 0) {
        D_002E0010.a = 0;
        D_002E0010.b = 0;
        D_002E0010.c = 0;
        D_002E0010.d = 1.0f;
        D_002E0020 = D_001CDE80;
    }
}
