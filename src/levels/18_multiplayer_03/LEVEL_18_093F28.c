/* LEVEL_18:0x093F28 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_0026B328[];

int func_093F28(int index)
{
    return D_0026B328[index].w8;
}
