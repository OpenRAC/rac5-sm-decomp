/* LEVEL_22:0x0943B8 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_00209018[];

int func_0943B8(int index)
{
    return D_00209018[index].w8;
}
