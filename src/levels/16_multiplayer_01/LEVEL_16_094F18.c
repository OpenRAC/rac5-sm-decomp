/* LEVEL_16:0x094F18 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_0026AFA8[];

int func_094F18(int index)
{
    return D_0026AFA8[index].w8;
}
