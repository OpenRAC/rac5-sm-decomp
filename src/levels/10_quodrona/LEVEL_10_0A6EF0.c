/* LEVEL_10:0x0A6EF0 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_002BC858[];

int func_0A6EF0(int index)
{
    return D_002BC858[index].w8;
}
