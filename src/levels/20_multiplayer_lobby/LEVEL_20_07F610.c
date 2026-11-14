/* LEVEL_20:0x07F610 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_0018E7E8[];

int func_07F610(int index)
{
    return D_0018E7E8[index].w8;
}
