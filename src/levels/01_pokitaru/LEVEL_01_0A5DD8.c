/* LEVEL_01:0x0A5DD8 -- returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_002B3458[];

int func_0A5DD8(int index)
{
    return D_002B3458[index].w8;
}
