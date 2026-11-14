/* LEVEL_24:0x09F650 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_0027F318[];

int func_09F650(int index)
{
    return D_0027F318[index].w8;
}
