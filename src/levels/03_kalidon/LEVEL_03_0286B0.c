/* LEVEL_03:0x0286B0 -- copies the shared 52-byte block into the slot of an
   indexed table. */
typedef struct {
    float f[13];
} Block;

typedef struct {
    int pad[58];
    Block block;
} Element;

extern Block D_24BDC0;
extern Block *D_20C62C;

void func_0286B0(int index)
{
    int offset = index * 52;
    Element *element = (Element *)(offset + (int)D_20C62C);

    element->block = D_24BDC0;
}
