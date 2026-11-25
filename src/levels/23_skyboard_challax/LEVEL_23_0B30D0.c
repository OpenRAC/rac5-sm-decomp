/* LEVEL_23:0x0B30D0 -- placement copy of LEVEL_22_0AA7E0.c: placement copy of LEVEL_01_0BC338.c: stores a value (3 when it is zero) and the constant 2 into a global record and returns 1. */
typedef struct {
    int a;
    int pad;
    int b;
} Rec;

extern Rec D_002F9E70;

int func_0B30D0(int v)
{
    D_002F9E70.a = v != 0 ? v : 3;
    D_002F9E70.b = 2;
    return 1;
}
