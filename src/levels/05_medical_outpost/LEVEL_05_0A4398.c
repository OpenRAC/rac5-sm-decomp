/* LEVEL_05:0x0A4398 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_0029F318[];

int func_0A4398(int index)
{
    return D_0029F318[index].w8;
}
