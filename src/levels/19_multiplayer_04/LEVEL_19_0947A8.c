/* LEVEL_19:0x0947A8 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_0026B128[];

int func_0947A8(int index)
{
    return D_0026B128[index].w8;
}
