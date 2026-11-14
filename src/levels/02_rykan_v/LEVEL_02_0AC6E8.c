/* LEVEL_02:0x0AC6E8 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_002CA958[];

int func_0AC6E8(int index)
{
    return D_002CA958[index].w8;
}
