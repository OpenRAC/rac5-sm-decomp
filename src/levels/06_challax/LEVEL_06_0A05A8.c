/* LEVEL_06:0x0A05A8 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_002A01D8[];

int func_0A05A8(int index)
{
    return D_002A01D8[index].w8;
}
