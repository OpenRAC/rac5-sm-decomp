/* LEVEL_08:0x0B06D0 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_003026D8[];

int func_0B06D0(int index)
{
    return D_003026D8[index].w8;
}
