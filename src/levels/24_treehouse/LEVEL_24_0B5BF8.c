/* LEVEL_24:0x0B5BF8 -- placement copy of LEVEL_22_0AA7E0.c: placement copy of LEVEL_01_0BC338.c: stores a value (3 when it is zero) and the constant 2 into a global record and returns 1. */
typedef struct {
    int a;
    int pad;
    int b;
} Rec;

extern Rec D_002F48F0;

int func_0B5BF8(int v)
{
    D_002F48F0.a = v != 0 ? v : 3;
    D_002F48F0.b = 2;
    return 1;
}
