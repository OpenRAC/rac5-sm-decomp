/* LEVEL_23:0x02F208 -- store a vector and a value in the global record. */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    V3 v;
    int w;
} Record;

extern Record D_202020;

void func_02F208(V3 *src, int w)
{
    D_202020.v = *src;
    D_202020.w = w;
}
