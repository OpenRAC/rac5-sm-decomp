/* LEVEL_04:0x0AAFE8 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_002CDC58[];

int func_0AAFE8(int index)
{
    return D_002CDC58[index].w8;
}
