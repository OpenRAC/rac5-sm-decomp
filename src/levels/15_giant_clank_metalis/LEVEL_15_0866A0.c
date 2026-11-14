/* LEVEL_15:0x0866A0 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_001CB498[];

int func_0866A0(int index)
{
    return D_001CB498[index].w8;
}
