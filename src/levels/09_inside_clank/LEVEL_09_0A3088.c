/* LEVEL_09:0x0A3088 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_0029ABD8[];

int func_0A3088(int index)
{
    return D_0029ABD8[index].w8;
}
