/* LEVEL_16:0x118B90 -- placement copy of LEVEL_17_118508.c: a header cleared and scaled, then a 64-byte
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

extern Hdr D_002DFE90;
extern Block64 D_002DFEA0;
extern Block64 D_001CCC80;

void func_118B90(int handle, int flag)
{
    if (flag == 0xFFFF && handle != 0) {
        D_002DFE90.a = 0;
        D_002DFE90.b = 0;
        D_002DFE90.c = 0;
        D_002DFE90.d = 1.0f;
        D_002DFEA0 = D_001CCC80;
    }
}
